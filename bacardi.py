import sys
from PyQt5.QtWidgets import QDateEdit, QComboBox,QCalendarWidget,QFormLayout,QGroupBox,QLabel,QLineEdit,QComboBox,QSpinBox, QMainWindow, QApplication, QPushButton, QWidget, QAction, QTabWidget,QVBoxLayout
from PyQt5.QtGui import QIcon
from PyQt5.QtCore import pyqtSlot,pyqtSignal,QDate
import mysql.connector
import datetime

class App(QMainWindow):
    popupSignal = pyqtSignal()
    def __init__(self):
        super().__init__()
        self.title = 'Bacardi'
        self.left = 0
        self.top = 0
        self.width = 300
        self.height = 200
        self.setWindowTitle(self.title)
        self.setGeometry(self.left, self.top, self.width, self.height)
        self.createFormGroupBox()
        self.Connection()
        # mainLayout = QVBoxLayout()
        self.tabs = QTabWidget()
        self.tab1 = QWidget()
        self.tab2 = QWidget()

        self.tabs.addTab(self.tab1,"Add Product")
        self.tabs.addTab(self.tab2,"Generate Bill")

        self.tab1.layout = QVBoxLayout(self)
        self.tab1.layout.addWidget(self.formGroupBox)
        self.tab1.setLayout(self.tab1.layout)
        # self.table_widget = MyTableWidget(self)
        self.setCentralWidget(self.tabs)

        self.submit_btn.clicked.connect(self.SubmtEntry)


        self.show()


    def Connection(self):
        self.mysqlconnection = mysql.connector.connect(host="localhost",user="root",passwd="root" ,database="bacardi")
        self.mysqlcursor = self.mysqlconnection.cursor()
                


    def SubmtEntry(self):
        itemName = self.itemName.text()
        qty = self.qty.text()
        # exp_date = self.expiry_date.text()
        price = self.price.text()
        purchase_from = self.purchase_from.text()
        GST = self.GST.text()
        exp_date = QDate(self.expiry_date.date())

        type_of_packing = self.type_of_packing.currentText()
        # exp_date = exp_date.year()+"/"+exp_date.month()+"/"+exp_date.day()
        
        exp_date = "{}/{}/{}".format(exp_date.year(),exp_date.month(),exp_date.day())
        
        query = "insert into product_master values(DEFAULT,'{}',{},'{}',{},'{}','{}','{}')".format(itemName,qty,exp_date,price,purchase_from,GST,type_of_packing)
        print(query)

        # print(itemName+qty+exp_date+price+purchase_from+GST)
        self.mysqlcursor.execute(query)
        self.mysqlconnection.commit()
        # print("clicked")

    def EntryPoint(self):
        mainLayout = QVBoxLayout()
        self.tabs = QTabWidget()
        self.tab1 = QWidget()
        self.tab2 = QWidget()

        self.tabs.addTab(self.tab1,"Add Product")
        self.tabs.addTab(self.tab2,"Generate Bill")

        self.tab1.layout = QVBoxLayout(self)
        self.tab1.layout.addWidget(self.formGroupBox)
        self.tab1.setLayout(self.tab1.layout)


    def createFormGroupBox(self):
        self.formGroupBox = QGroupBox("Add Product")
        layout = QFormLayout()
        
        

        self.submit_btn = QPushButton("Submit")
        self.itemName = QLineEdit()
        self.qty = QLineEdit()
        # self.expiry_date = QLineEdit()
        # self.expiry_date = ()

        

        self.expiry_date = QDateEdit()
        self.expiry_date.setCalendarPopup(True)
        self.expiry_date.setMinimumDate(QDate.currentDate())
        

        # yr = datetime.datetime.today().year
        # dt = QDate()
        # dt.getDate()

        self.price = QLineEdit()
        self.purchase_from = QLineEdit()
        self.GST = QLineEdit()
        layout.addRow(QLabel("Item Name:"), self.itemName)
        layout.addRow(QLabel("Quantity:"), self.qty)
        
        self.type_of_packing = QComboBox()
        self.type_of_packing.addItem("Packets")
        self.type_of_packing.addItem("Tablets")
        self.type_of_packing.addItem("Carton")
        layout.addRow(QLabel("Type"),self.type_of_packing)

        layout.addRow(QLabel("Expiry Date:"), self.expiry_date)
        layout.addRow(QLabel("Price:"), self.price)
        layout.addRow(QLabel("Purchase from:"),self.purchase_from)                           
        layout.addRow(QLabel("GST:"), self.GST)
        layout.addWidget(self.submit_btn)
        self.formGroupBox.setLayout(layout)
    


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = App()
    
    sys.exit(app.exec_())

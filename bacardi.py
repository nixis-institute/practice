import sys
from PyQt5.QtWidgets import QCompleter, QListWidget,QRadioButton, QGridLayout,QDesktopWidget, QDateEdit, QComboBox,QCalendarWidget,QFormLayout,QGroupBox,QLabel,QLineEdit,QComboBox,QSpinBox, QMainWindow, QApplication, QPushButton, QWidget, QAction, QTabWidget,QVBoxLayout
from PyQt5.QtGui import QIcon
from PyQt5 import QtGui

from PyQt5.QtCore import pyqtSlot,pyqtSignal,QDate,QRegExp
import mysql.connector
import datetime

class App(QMainWindow):
    popupSignal = pyqtSignal()
    def __init__(self):
        super().__init__()
        
        self.title = 'Bacardi'
        self.left = 0
        self.top = 0
        self.width = 500
        self.height = 500
        self.setWindowTitle(self.title)
        self.listwidget = QListWidget()
        self.setGeometry(self.left, self.top, self.width, self.height)
        centerPoint = QDesktopWidget().availableGeometry().center()
        qtRectangle  = self.frameGeometry()
        qtRectangle.moveCenter(centerPoint)
        self.move(qtRectangle.topLeft())


        self.createFormGroupBox()
        self.Connection()
        # self.getMedicineName()
        # mainLayout = QVBoxLayout()
        self.tabs = QTabWidget()
        self.tab1 = QWidget()
        self.tab2 = QWidget()
        self.medicine_names = ["2","3","4"]
        self.tabs.addTab(self.tab1,"Add Product")
        self.tabs.addTab(self.tab2,"Generate Bill")

        self.tab1.layout = QVBoxLayout(self)
        # self.tab1.layout.addWidget(self.formGroupBox)

        self.tab1.setLayout(self.ProductGriding())
        # self.table_widget = MyTableWidget(self)

        self.tab2.layout = QVBoxLayout(self)
        # self.tab2.layout.addWidget(self.createGrid())
        self.tab2.setLayout(self.BillGriding())
        # self.tab2.layout.addWidget(self.BillForm())


        # self.gridlayout = QGridLayout()
        # self.gridlayout.addWidget(self.tabs)
        # self.gridlayout.addWidget(self.createExampleGroup(), 0, 0)



        

        self.setCentralWidget(self.tabs)
        # self.setLayout(self.gridlayout)
        self.submit_btn.clicked.connect(self.SubmtEntry)
        self.show()


    def Connection(self):
        self.mysqlconnection = mysql.connector.connect(host="localhost",user="root",passwd="root" ,database="bacardi")
        self.mysqlcursor = self.mysqlconnection.cursor()
                

    def increment(self):
        self.medicine_names.append("898")
        self.tabs.update()
        # self.BillForm.medicine_name.setEnabled(False)

        completer = QCompleter(self.medicine_names)
        self.medicine_name.setCompleter(completer)

        # self.price.setEnabled(False)
        print(self.medicine_names)

    def Refreshing(self):
        self.formGroup.update()
        print("tabs refreshed")


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
        # self.getMedicineName()
        self.Refreshing()
        # self.formGroup.update()
        # self.BillForm.update()
        # print("clicked")




    def ProductGriding(self):
        grid = QGridLayout()
        grid.addWidget(self.formGroupBox,0,0)
        return grid

    def BillGriding(self):
        grid = QGridLayout()
        # grid.addWidget(self.createGrid(), 0, 0)
        # grid.addWidget(self.createGrid(), 1, 0)
        # grid.addWidget(self.createGrid(), 0, 1)
        # grid.addWidget(self.createGrid(), 1, 1)

        grid.addWidget(self.BillForm(),0,0)
        return grid

    # def createGrid(self):
    #     groupBox = QGroupBox("Best Food")
    #     radio1 = QRadioButton("&Radio pizza")
    #     radio2 = QRadioButton("R&adio taco")
    #     radio3 = QRadioButton("Ra&dio burrito")

    #     radio1.setChecked(True)

    #     vbox = QVBoxLayout()
    #     vbox.addWidget(radio1)
    #     vbox.addWidget(radio2)
    #     vbox.addWidget(radio3)
    #     vbox.addStretch(1)
    #     groupBox.setLayout(vbox)
    #     return groupBox

    # def ListOfMedicine(self):


    def getMedicineName(self):
        query = "select item_name,qty from product_master"
        self.mysqlcursor.execute(query)
        d = self.mysqlcursor.fetchall()
        # print(d)
        # print(d)
        
        # self.listwidget.clear()
        # self.listwidget.addItems(i[0] for i in d)
        # l = (i[0] for i in d)
        self.medicine_names =[]
        for i in d:
            self.medicine_names.append(i[0])
        # print(l)
        return self.medicine_names

    def BillForm(self):
        self.formGroup = QGroupBox("Generate Bill")
        layout = QFormLayout()
        print("clicked")
        submit = QPushButton("Generate")
        
        submit.clicked.connect(self.increment)

        userName = QLineEdit()
        userName.setValidator(QtGui.QRegExpValidator(QRegExp("[a-z-A-Z_]+")))
        age = QLineEdit()
        age.setValidator(QtGui.QIntValidator(0,100))
        
        # sex = QLineEdit()
        # sex.setValidator(QtGui.QRegExpValidator())

        sex = QComboBox()
        sex.addItem("Male")
        sex.addItem("Female")
        regNo = QLineEdit()
        GST = QLineEdit()
        self.medicine_name = QLineEdit()
        
        completer = QCompleter(self.medicine_names)
        # print(self.getMedicineName())
        self.medicine_name.setCompleter(completer)
        # medicine_name.textChanged.connect()



        qty = QLineEdit()
        qty.setValidator(QtGui.QIntValidator(0,100))

        expiry_date = QDateEdit()
        expiry_date.setCalendarPopup(True)
        expiry_date.setMinimumDate(QDate.currentDate())
        
        price = QLineEdit()
        price.setValidator(QtGui.QDoubleValidator())

        bill_pay_by = QLineEdit()

        date = QDateEdit()
        date.setCalendarPopup(True)
        date.setDate(QDate.currentDate())
        discount = QLineEdit()
        discount.setValidator(QtGui.QDoubleValidator())
        
        layout.addRow(QLabel("Patient Name"),userName)
        layout.addRow(QLabel("Age"),age)
        layout.addRow(QLabel("Sex"),sex)
        layout.addRow(QLabel("Registration Number"),regNo)
        layout.addRow(QLabel("GST No."),GST)
        layout.addRow(QLabel("Medicine Name"),self.medicine_name)
        
        # layout.addRow(None,self.listwidget)

        layout.addRow(QLabel("Quantity"),qty)
        layout.addRow(QLabel("Expiry Date"),expiry_date)
        layout.addRow(QLabel("Price"),price)
        layout.addRow(QLabel("Bill Pay By"),bill_pay_by)
        layout.addRow(QLabel("Date"),date)
        layout.addRow(QLabel("Discount"),discount)
        layout.addWidget(submit)

        self.formGroup.setLayout(layout)
        return self.formGroup

        



    def createFormGroupBox(self):
        self.formGroupBox = QGroupBox("Add Product")
        layout = QFormLayout()

        self.submit_btn = QPushButton("Submit")
        self.itemName = QLineEdit()
        self.qty = QLineEdit()
        

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

import pandas as pd
import sqlite3 as sq
import requests
from bs4 import BeautifulSoup as BS
#url = "https://en.wikipedia.org/wiki/Visual_Studio_Code"
url = "https://en.wikipedia.org/wiki/Microsoft_Visual_Studio"
r = requests.get(url)
dataa = BS(r.content,'html.parser')
table = dataa.find("table","wikitable")
#df = pd.read_html(table)
df = pd.read_html(str(table))
db = sq.connect("abc.db")

df[0].to_sql("wikitable",db,if_exists="replace")


print("success!")
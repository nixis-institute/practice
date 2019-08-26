import requests
import pandas as pd
from bs4 import BeautifulSoup as bs
url="https://www.shopclues.com/mens-sports-shoes.html?page=4"
r=requests.get(url)
soup=bs(r.content,"html.parser")
st=soup.find_all("div","column col3")
l=[]
for i in st:
    p=i.find("span","prod_name")
    l.append(p.text)
print(l)
dc = {'product':l}
f = open('data.csv','w')
df = pd.DataFrame(dc)
print(df)
df.to_csv(f)
import pandas as pd
dc = {}
for i in range(1,2):
    name = input('Enter your name :- ')
    Age = int(input('Enter your Age :- '))
    Id = int(input('Enter your ID :- '))
    Add = input('Enter you address :- ')

dc = {'Name':name,'Age':Age,'ID':Id,'Addresss':Add}
# print(dc)

a = input("Do you want to add a new column y/n :- ")
if(a=='y'):
    c = input('Column name :- ')
    v = input('Put data on column :- ')
    dc[c]=v
else:
    print('Okey...')
print(dc)
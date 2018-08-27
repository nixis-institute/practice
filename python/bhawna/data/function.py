class Calculation:

    def __init__(self):
        self.a = 8
        self.b = 9

    def sum(self,b):
        return self.a + self.b+b
    
    def sub(a,b):
        return a-b

    def mul(a,b):
        return a*b



class SQ():
    def square(a):
        return a*a

    def cube(a):
        return a**3


cal = Calculation()
cal.a = 9

print(cal.sum(4))
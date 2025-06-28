class Calculator:
    def __init__(self,n):
        self.n = n
    
    def squre(self):
        print(f"The squre of {self.n} is {self.n**2}")    

    def cube(self):
        print(f"The cube of {self.n} is {self.n**3}")    
        
    def squareroot(self):
        print(f"The squre root of {self.n} is {self.n**0.5}")

a = Calculator(9)
a.squre()
a.cube()
a.squareroot()

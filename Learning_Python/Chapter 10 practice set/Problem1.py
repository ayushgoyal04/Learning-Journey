class Programmer:
    company = "Microsoft"
    def __init__(self, name, salary, pin ):
        self.name = name
        self.salary = salary
        self.pin = pin
        

p = Programmer("Ayush", 999999, 123456)
print(p.company, p.name, p.salary, p.pin)

r = Programmer("Kunal", 111111, 123)
print(r.company, r.name, r.salary, r.pin)
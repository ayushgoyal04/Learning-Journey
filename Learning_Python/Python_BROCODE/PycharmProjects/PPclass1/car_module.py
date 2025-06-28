class Car:
    wheels = 4  # class variables
    make = None
    model = None
    year = None
    color = None

    def __init__(self, make, model, year, color):
        # constructor
        self.make = make    # instance variable
        self.model = model
        self.year = year
        self.color = color

    # methods
    def drive(self):
        print("This "+self.model+" car is driving...")

    def stop(self):
        print("The "+self.model+" is stopping...")
        
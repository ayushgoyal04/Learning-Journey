from abc import ABC, abstractmethod

class Vehicle(ABC):
    @abstractmethod
    def go(self):
        pass

    @abstractmethod
    def stop(self):
        pass

class Car(Vehicle):
    def go(self):
        print("You drive the car")
    def stop(self):
        print("You stop the car")

class Motocycle(Vehicle):
    def go(self):
        print("You ride the motorcycle")

    def stop(self):
        print("You stop the motorcycle")


#vehicle = Vehicle() # this is illegal
car = Car()
motorcycle = Motocycle()

# vehicle.go()
car.go()
motorcycle.go()
car.stop()
motorcycle.stop()
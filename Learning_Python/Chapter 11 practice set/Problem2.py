class Animal:
    pass

class Pets(Animal):
    pass

class Dog(Pets):
    @staticmethod
    def bark():
        print("Bark Bark")
    
cupcake = Dog()
cupcake.bark()
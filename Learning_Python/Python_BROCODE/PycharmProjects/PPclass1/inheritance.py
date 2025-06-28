class Animal:
    alive = True

    def eat(self):
        print("Animal eating")

    def sleep(self):
        print("Animal sleeping")

# child classes
class Rabbit(Animal):
    def hop(self):
        print("Rabbit is running")
class Fish(Animal):
    def swim(self):
        print("Fish is swimming")
class Dog(Animal):
    def bark(self):
        print('Dog is barking')

# objects
rabbit = Rabbit()
fish = Fish()
dog = Dog()
#
# print(rabbit.alive)
# fish.eat()
# dog.sleep()

rabbit.hop()
fish.swim()
dog.bark()
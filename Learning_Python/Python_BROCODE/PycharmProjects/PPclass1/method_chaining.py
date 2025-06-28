class Car:
    def turn_on(self):
        print("Start the engine")
        return self

    def drive(self):
        print("Drive the car")
        return self

    def brake(self):
        print("push the brakes")
        return self

    def stop(self):
        print("The car has stopped")
        return self

car = Car()
(car.turn_on()
 .drive()
 .brake()
 .stop())

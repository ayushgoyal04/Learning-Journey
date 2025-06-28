import threading
import time


def eat_breakfast():
    time.sleep(3)
    print("Breakfast Ate")

def drink_milk():
    time.sleep(4)
    print("You drank milk")

def study():
    time.sleep(5)
    print("You finished hw")

x = threading.Thread(target=eat_breakfast, args=())
x.start()

y = threading.Thread(target=drink_milk, args=())
y.start()

z = threading.Thread(target=study, args=())
z.start()

x.join()
y.join()
z.join()


print(threading.active_count())
print(threading.enumerate())
print(time.perf_counter())
#eat_breakfast()
#drink_milk()
#study()
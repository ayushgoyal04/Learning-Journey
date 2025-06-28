import threading
import time


def timer():
    print()
    count = 0
    while True:
        time.sleep(1)
        count += 1
        print("Logged in for: ", count, "seconds")


x = threading.Thread(target=timer, daemon=True)
x.start()


print()
answer = input("Do you want to exit?")

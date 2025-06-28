def myFunc():
    print("Hello world!")

myFunc()

if __name__ == "__main__":
    # If this code is directly executed by running the file its present in
    print("We are directly running this code")
    print("This part is hidden from the other files.")
    myFunc()
    print(__name__)
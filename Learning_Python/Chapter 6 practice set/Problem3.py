message = input("Enter a message: ")
if("make a lot of money" in message or "buy now" in message or "subscribe this" in message or "click this" in message):
    spam = True
    print("The message is a spam message")
else: 
    spam = False
    print(f"The message is not a spam message")

if(spam):
    print("You can mark this message as spam")
else:
    print("You can mark this message as not spam")
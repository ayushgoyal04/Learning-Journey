from tkinter import *

food = ["pizza",  "burger", "hotdog"]
def order():
    if(x.get()==0):
        print("You ordered pizza")
    elif(x.get()==1):
        print("You ordered burger")
    elif(x.get()==2):
        print("You ordered hotdog")
    else: print("HUH?")
window = Tk()

pizzaImage = PhotoImage(file='download.png')
burgerImage = PhotoImage(file='download.png')
hotdogImage = PhotoImage(file='download.png')
fooodImages = [pizzaImage, burgerImage, hotdogImage]


x = IntVar()

for index in range(len(food)):
    radiobutton = Radiobutton(window,
                              text=food[index], #adds text to radiobuttone
                              variable=x, #  groups  radiobuttons together
                              value=index, # assigns each radiobutton a different value
                              padx = 25, # adds padding on x axis
                              font=("Impact", 50),
                              image=fooodImages[index], # adds image to radio buttons
                              compound='left', # adds image (left side)
                              indicatoron=0, # eliminate circle indicators 
                              width=575, # sets width of radiobuttons
                              command=order # det command of radiobuttons to function
                              )
    radiobutton.pack(anchor=W)
    
window.mainloop()
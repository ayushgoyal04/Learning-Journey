from tkinter import *

count = 0
def click():
   # print("You clicked the button")
   global count
   count+=1
   print(count)

window = Tk()

photo = PhotoImage(file='download.png')
button = Button(window,
                text="Click Me",
                command=click,
                font=("Comic Sans",30),
                fg="#00FF00",
                bg="black",
                activeforeground="#00FF00",
                activebackground="black",
                state=ACTIVE,
                image=photo,
                compound='top')

button.pack()

window.mainloop()
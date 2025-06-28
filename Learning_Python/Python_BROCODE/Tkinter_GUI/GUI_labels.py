from tkinter import *

window = Tk()

photo = PhotoImage(file='download.png')

label = Label(window,
              text="Hello GUI World", 
              font=('Arial',40,'bold'),
              fg='#00FF00',
              bg='black',
              relief=RAISED,
              bd=10,
              padx=20,
              pady=20,
              image=photo,
              compound='bottom')

label.pack() # place label in top center
# label.place(x=100,y=100)

window.mainloop()
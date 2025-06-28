from tkinter import *

# widgets = GUI elements: buttons, labels, textboxes
# windows = serves as a container to hold or contain these widgets

window = Tk()  # instantiate an instance of a window
window.geometry("420x420") # Changes the size of the window
window.title("My first GUI") # Changes the title of the window 

# Replacing the top left icon image
icon = PhotoImage(file= 'download.png')
window.iconphoto(True, icon)

# change the background color
window.config(background="black")
window.config(background="#db6c1d") # hex color picker


window.mainloop() # This will place window on computer screen

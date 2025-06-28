# if we want to use some other versionss of python we can create a virtual environment inside our system.
# pip install virtualenv  # to install the package
# virtualenv myenv        # to create a virtual environment
# .\env\Scripts\activate  # to activate the virtual environment

# pip freeze command      # to see the packages installed in the virtual environment 

'''
# pip freeze > requirements.txt   
To save the packages installed in the virtual environment in a file named requirements.txt
The above command creates a file named requirements.txt in the same directory containing the output of pip freeze which contains the names of the packages installed in the virtual environment.
This is specially good if we want to destribute the file to other people so that they can create the same environment.
# pip install -r requirements.txt
'''

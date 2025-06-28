import os

def print_directory_contents(directory):
    try:
        with os.scandir(directory) as entries:
            for entry in entries:
                print(entry.name)
    except FileNotFoundError:
        print(f"The directory {directory} does not exist.")
    except PermissionError:
        print(f"Permission denied for accessing the directory {directory}.")

# Specify the directory you want to list
directory_path = '/'

# Call the function to print the directory contents
print_directory_contents(directory_path)

#  import os
# checking if file/ folder exists of not
# path = 'D:\\python\\harry'
# if os.path.exists(path):
#     print("Location exists")
#     if os.path.isfile(path):
#         print("That is a file")
#     elif os.path.isdir(path):
#         print("That is a directory")
# else:
#     print("That location does not exist")


# reading files
# try:
#     with open('D:\\python\\file.txt') as file:
#         print(file.read())
#     print(file.closed)
# except FileNotFoundError:
#     print("File was not found")


# writing files 'a' will append and 'w' will overwrite the text
# text = "Content added in the file"
# with open('D:\\python\\file1.txt', 'w') as file:
#     file.write(text)


# copyig files
# copyfile() = copies content of a file
# copy() = copyfile() + permission mode + destination can be a directory
# copy2() = copy() + copies metadata (file's creation and modification time)
# import shutil
# shutil.copyfile("D:\\python\\file1.txt","D:\\python\\file2.txt")
# shutil.copy("D:\\python\\file1.txt","D:\\python\\file2.txt")
# shutil.copy2("D:\\python\\file1.txt","D:\\python\\file2.txt")


# moving files or directories
# import os
# source = "D:\\python\\file1.txt"
# destination = "D:\\babbar\\new.txt"
# try:
#     if os.path.exists(destination):
#         print("File is present at the source")
#     else:
#         os.replace(source, destination)
#         print(source + " Was moved")
# except FileNotFoundError:
#     print("Source was not found")


# deleting  files
# import os
# import shutil
# path_file = 'D:\\babbar\\new.txt'
# path_nonEmpty_folder = "C:\\Users\\ayush\\OneDrive\\Desktop\\New folder"
# path_folder = "C:\\Users\\ayush\\OneDrive\\Desktop\\New folder"
# try:
#     os.rmdir(path_folder)  {Will ony delete an empty folder}
#     os.remove(path_file)   {Will not delete folder}
#     shutil.rmtree(path_nonEmpty_folder)
# except FileNotFoundError:
#     print("The file was not found")
# except PermissionError:
#     print("No permission to delete folder")
# except OSError:
#     print("os.remdir will not delete non empty folders")
# else:
#     print("Path was deleted")

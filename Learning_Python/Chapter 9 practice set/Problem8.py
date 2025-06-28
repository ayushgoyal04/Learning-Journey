with open("file.txt", "r") as f:
    content = f.read()
    
with open("filecopy.txt", "w") as f:
    f.write(content)
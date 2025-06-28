with open("file.txt", "r") as f:
    content1 = f.read()
    
with open("filecopy.txt", "r") as f:
    content2 = f.read()
    
if content1 == content2:
    print("Both files have same content, they are identical")
else:
    print("Both files have different content")
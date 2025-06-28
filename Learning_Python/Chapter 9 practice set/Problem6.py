with open("log.txt", "r") as f:
    content = f.read()
    # print(content)

if("python" in content):
    print("Yes python is present")
else:
    print("No python is not present")
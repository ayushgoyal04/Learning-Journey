
with open("log.txt") as f:
    lines = f.readlines()

lineno = 1
for line in lines:
    if("python" in line):
        print(f"Yes python is present. Line no: {lineno}")
        break # break statement stops the else block from executing
    lineno += 1

else:
    print("No Python is not present")
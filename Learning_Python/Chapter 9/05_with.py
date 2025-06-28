f= open("file.txt")
print(f.read())
f.close()

# The same can be written using with statement as follows:
with open("file.txt") as f:
    print(f.read())
# We do not have to close the file explicitly when using with statement.
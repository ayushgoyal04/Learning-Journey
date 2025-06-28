s = set()
s.add(25)
s.add(25.0)
s.add("25")

print(s)
print(len(s)) # returns the length of the set

# python treats 25 and 25.0 as same and only one of them is added to the set
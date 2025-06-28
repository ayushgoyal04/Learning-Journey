a = 'Ayush'
b = "Rajiv"
c = '''Goyal. 
        This is a multiline string'''
# print(c)

"""
Theory
1. Strings in python are immutable.    
2. Indexing from left to right will start form 0 and indexing from right to left will start from -1. 
"""

# String slicing
name = "Ayush"
lengthOfString = len(name)
nameShort = name[0:3] # start from index 0 all the way till 3, EXCLUDING 3 (0,1,2 included)
# Last index is not included, first index is included.
print(nameShort)

character1 = name[1] # print chara at index 1
print(character1)

# Negative slicing
name = "Ayush"
print(name[0:3])
print(name[-5:-2]) # Tip-> convert negative values to corresponding positive indices

print(name[:3])  # is same as print(name[0:3])
print(name[:])   # is same as print(name[0:5]) 
print(name[1:])  # is same as print(name[1:5])
print(name[1:5]) # is same as print(name[1:])

# SLICING WITH SKIP VALUE
n = "0123456789"
print(n[1:7:3])
print(n[1:8:2])
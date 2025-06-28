name = "Ayush"
print(len(name))

print(name.endswith("ush"))  # Gives true for name.endswith("")
print(name.startswith("Ay"))
print(name.startswith("ay")) # This function is case sensitive
print(name.capitalize())     # Capitalises only the first char

# Convert all characters in the string to lowercase
s = "Hello World"
print(s.lower())  # Output: hello world

# Convert all characters in the string to uppercase
print(s.upper())  # Output: HELLO WORLD

# Remove any leading and trailing whitespace from the string
s = "  Hello World  "
print(s.strip())  # Output: Hello World

# Replace all occurrences of a specified substring with another substring
s = "Hello World"
print(s.replace("World", "Python"))  # Output: Hello Python

# Split the string into a list of substrings based on a specified separator
print(s.split(" "))  # Output: ['Hello', 'World']

# Join elements of an iterable (e.g., list) into a single string, separated by the string on which it is called
words = ["Hello", "World"]
print(" ".join(words))  # Output: Hello World

# Return the lowest index in the string where the substring is found. Return -1 if the substring is not found.
print(s.find("World"))  # Output: 6

# Return True if the string starts with the specified prefix, otherwise return False.
print(s.startswith("Hello"))  # Output: True

# Return True if the string ends with the specified suffix, otherwise return False.
print(s.endswith("World"))  # Output: True

# Return the number of non-overlapping occurrences of the substring in the string.
s = "Hello World Hello"
print(s.count("Hello"))  # Output: 2

# Return True if all characters in the string are digits, otherwise return False.
s = "12345"
print(s.isdigit())  # Output: True

# Return True if all characters in the string are alphabetic, otherwise return False.
s = "Hello"
print(s.isalpha())  # Output: True

# Return True if all characters in the string are alphanumeric, otherwise return False.
s = "Hello123"
print(s.isalnum())  # Output: True

# Convert the first character of each word to uppercase and the rest to lowercase
s = "hello world"
print(s.title())  # Output: Hello World

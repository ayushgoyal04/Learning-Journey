print("Ayush Goyal" )
print("Practical: 03")
print("Roll no: 25")
print("Batch: A2")
# Aim: b] B. Write a Python program to analyze the frequency of letters in a given text.
# Accept a multiline text input and use a dictionary to count the occurrences of each letter
# (both uppercase and lowercase). Display the results in alphabetical order, showing the letter and its frequency.
# Ignore non-alphabetic characters.
def count_letter_frequency(text):
    letter_frequency = {}

    for char in text:
        if char.isalpha():
            char = char.lower()
            if char in letter_frequency:
                letter_frequency[char] += 1
            else:
                letter_frequency[char] = 1

    sorted_letter_frequency = sorted(letter_frequency.items())

    for letter, frequency in sorted_letter_frequency:
        print(f"{letter}: {frequency}")

text = input("Enter a multiline text:\n")
count_letter_frequency(text)











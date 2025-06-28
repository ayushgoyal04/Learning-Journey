# name = input("Enter your name: ")
# print("Hello",name,",\nYou are selected!\n20/07/2024")

letter = '''Dear <|Name|>,
You are selected!
<|Date|>'''
            
print(letter.replace("<|Name|>", "Ayush").replace("<|Date|>","20/07/2024"))
# Chaining of .replace function
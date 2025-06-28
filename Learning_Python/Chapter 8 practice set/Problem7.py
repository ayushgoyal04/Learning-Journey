def rem(l, word):
    n = []
    
    for item in l:
        if not(item == word):
            n.append(item.strip(word))
    return n



l = ["Ayush", "Kunal", "Div", "Aman", "Kushal", "Ankit", "Dhruv", "Aarav", "Rahul", "Rohit"]
word = input("Enter the word you want to remove from the list: ")
print(rem(l, word))
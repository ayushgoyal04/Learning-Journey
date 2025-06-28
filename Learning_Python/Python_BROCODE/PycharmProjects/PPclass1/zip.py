# zin(*iterables)

usernames = ["Dude", "Bro", "Mister"]
passwords = ("p@ssword", "abc123", "guest")

# users = dict(zip(usernames, passwords))
#
# for key,value in users.items():
#     print(key+" : "+value)

login_dates = ["1/1/2021", "1/2/2021", "1/3/2021"]

users = zip(usernames, passwords, login_dates)

for i in users:
    print(i)
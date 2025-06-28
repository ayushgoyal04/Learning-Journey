# dictionary = A changable, unordered collection of unique key:value pairs
# fast because they use hashing, allow us to access value quickly

capitals = {'USA': 'Washington DC',
            'India': 'New Delhi',
            'China': 'Beijing',
            'Russia': 'Moscow'}
# print(capitals['Russia'])
# print(capitals.get('Germany'))
# print(capitals.get('India'))
# print(capitals.keys())
# print(capitals.values())
# print(capitals.items())
capitals.update({'Germany': 'Berlin'})
capitals.update({'USA': 'Las Vegas'})

capitals.pop('China')
capitals.clear()

for key,value in capitals.items():
    print(key,":", value)


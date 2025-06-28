const myObject = {
    js: 'JavaScript',
    py: 'Python',
    rb: 'Ruby'
}

for (const key in myObject) {
    // console.log(key);
    // console.log(myObject[key]);
    // console.log(`${key} is Shortcut for ${myObject[key]}`);
}


// forin for arrays
const myFruits = ['apple', 'banana', 'cherry']
for (const key in myFruits) {
    // console.log(key); // index
    // console.log(myFruits[key]); // value
}


// interesting
const map = new Map()
map.set('IN', 'India')
map.set('IN', 'India')
map.set('US', 'United States')
map.set('UK', 'United Kingdom')

for (const key in map) {
    // console.log(key); // no output-> maps are not iterable
}
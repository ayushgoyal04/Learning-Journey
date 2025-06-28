// for of

// ["", "", ""]
// [{}, {}, {}]

const arr = [1, 2, 3, 4, 5]

for (const num of arr) {
    // console.log(num);    
}

const greetings = "Hello World"
for (const greet of greetings) {
    // console.log(`each char of greetings is ${greet}`);
}


// MAP-> object
const map = new Map()
map.set('IN', 'India')
map.set('IN', 'India')
map.set('US', 'United States')
map.set('UK', 'United Kingdom')

// console.log(map);

for (const [key, value] of map) {
    // console.log(key, '->', value);    
}


// error in the below code snippet
const myObject = {
    'game1': 'Cricket',
    'game2': 'Football',
    'game3': 'Hockey'
}
for (const [key, value] of myObject) { // error
    // console.log(key, '->', value); 
}
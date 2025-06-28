const name = "Ayush";
const repoCount = 12;

console.log(name + " has " + repoCount+ " repositories"); // Outdated syntax, instead use backticks

console.log(`${name} has ${repoCount} repositories`); // Modern syntax


const gameName = new String('GTA 5'); // another way to create a string // note-> the typeof gameName is object not string


// String methods
console.log(gameName[0]); // G
console.log(gameName.__proto__); // String
console.log(gameName.length); // 5
console.log(gameName.toUpperCase()); // GTA 5
console.log(gameName.toLowerCase()); // gta 5 // does not change the original string [STACK MEMORY]
console.log(gameName.indexOf('5')); // 4
console.log(gameName.indexOf('6')); // -1
console.log(gameName.charAt(2)); // A
console.log(gameName.endsWith('5')); // true
console.log(gameName.split(' ')); // ['GTA', '5']
console.log(gameName.slice(0, 3)); // GTA  // does not include the last index[3] // we can also use nagative values
console.log(gameName.trim()); // GTA 5 // removes the extra spaces from the start and end of the string
console.log(gameName.replace('5', '6')); // GTA 6 // replaces the first occurence of 5 with 6
console.log(gameName)
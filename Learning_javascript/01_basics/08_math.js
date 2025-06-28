console.log(Math);
console.log(Math.abs(-7.8)); // 7.8
console.log(Math.ceil(7.1)); // 8
console.log(Math.floor(7.8)); // 7
console.log(Math.round(7.55)); // 8
console.log(Math.max(1, 2, 3, 4, 5)); // 5
console.log(Math.min(1, 2, 3, 4, 5)); // 1

console.log(Math.random()); // random number between 0 and 1
console.log(Math.random() * 100); // random number between 0 and 100
console.log((Math.random() * 100) + 1); 
console.log((Math.random() * 100).toFixed(2)); // random number between 0 and 100

const min = 10
const max = 20
console.log(Math.floor(Math.random() * (max - min + 1) + min)); // random number between 10 and 20
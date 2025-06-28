const dc = ["superman", "batman", "flash", "wonder woman"];
const marvel = ["iron man", "captain america", "thor", "black widow"];

marvel.push("hulk");
marvel.push(dc);

// console.log(marvel);
// console.log(marvel[5][1]); // batman

marvel.pop();
// console.log(marvel.concat(dc));
// concat returns a new array 
// console.log(marvel);

const all_new_heroes = [...dc, ...marvel]; // spread operator
console.log(all_new_heroes);


const mixedArr = [1, 2, 3, [4, 5, 6], 7, [6, 7, [6, 9]]];

const usable_mixedArr = mixedArr.flat(Infinity);
console.log(usable_mixedArr);

// data scrapping ussage
console.log(Array.isArray("Ayush"));
console.log(Array.from("Ayush"));
console.log(Array.from({name: "ayush"})); // unique case-> returns empty array 

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3));
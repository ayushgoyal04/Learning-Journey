// ============== Map ============== 

const myNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

// const newNumbers = myNumbers.map( (num) => num * 2)
// console.log(newNumbers);


// chaining 
const newNumbers = myNumbers
                    .map((num) => num * 2)
                    .map((num) => num + 1)
                    .filter((num) => num >= 10)
console.log(newNumbers);
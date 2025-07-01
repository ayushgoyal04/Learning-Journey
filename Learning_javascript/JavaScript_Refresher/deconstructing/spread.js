const a = [1, 2, 3];
const b = [4, 5, 6];

const c = [...a, ...b, 11, 12, 9]; // ... is the spread operator, it does nto collect the array, but the properties of the array, therefore it will not nest the entire array

// console.log(c) // [1, 2, 3, 4, 5, 6, 11, 12, 9]


// rest operator
function f1(a, b, ...rem) {
    console.log(a)
    console.log(b)

    console.log(rem)

}

f1(10, 20, 30, 40, 50);

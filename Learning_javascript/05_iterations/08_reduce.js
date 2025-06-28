// ============== Reduce ============== 

// The reduce() method applies a function against an accumulator and each element in the array (from left to right) to reduce it to a single value.
const myNums = [1, 2, 3 ]

// const myTotal = myNums.reduce(function (acc, currval) {
//     console.log('acc:', acc, 'currval:', currval);
//     return acc + currval
// }, 0)

const myTotal = myNums.reduce( (acc, currval) => {
    // console.log('acc:', acc, 'currval:', currval);
    return acc + currval
}, 0)

// console.log(myTotal);


const shoppingCart = [
    {
        itemName: 'JsCourse',
        price: 100
    },
    {
        itemName: 'ReactCourse',
        price: 200
    },
    {
        itemName: 'DjangoCourse',
        price: 300
    },
]

const totalCost = shoppingCart.reduce( (acc, item) => acc + item.price, 0)
console.log(`total bill: ${totalCost}`);

var fruits = ['apples', 'bananas', 'oranges'];
var fruit1 = fruits[0];
var fruit2 = fruits[1];
var fruit3 = fruits[2];

// sometimes arrays have a lot of values and loading them at once can cause performance issues
// destructuring allows us to load only the values we need

const [a, b, c] = ['apples', 'bananas', 'oranges']; // behind the scenes it is using a forEach
console.log(a); // apples
console.log(b); // bananas
console.log(c); // oranges


// object destructuring

const smoothie = {
    fats : ['peanut butter', 'almond butter', 'greek yogurt'],
    fruits: ['banana', 'strawberry'],
    liquids: ['milk', 'water'],
    greens: ['spinach', 'kale'],
}
console.log(typeof smoothie); // object
const { fats } = smoothie; // this is using forEach and find behind the scenes, hence we have to use the same name as the key in the object
console.log(fats); // ['peanut butter', 'almond butter', 'greek yogurt']
console.log(fats[0]); // peanut butter

const containsSpinach = ({ greens }) => {
    if (greens.find(g => g === 'spinach')) {
        return true;
    } else {
        return false;
    }
}
;

console.log(containsSpinach(smoothie))

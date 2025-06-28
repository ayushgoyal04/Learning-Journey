const tinderUser = new Object() // empty Singleton object
// const tinderUser = {} /// empty object non singleton object/ Literal
// console.log(tinderUser);

tinderUser.id = "123asd"
tinderUser.name = "Max"
tinderUser.isLoggedIn = false

// console.log(tinderUser)


// object inside an object
const regulaarUser = {
    email: "email@yahoo.com",
    fullname: {
        userFullname : {
            firstname: "Ayush",
            middlename: "Rajiv",
            lastname: "Goyal"
        }
    }

}

// console.log(regulaarUser.fullname.userFullname.lastname)


// combining objects
const obj1 = {1: "a", 2: "b"}
const obj2 = {3: "a", 4: "b"}

// const obj3 = {obj1, obj2} // wrong way to merge objects
// const obj3 = Object.assign({}, obj1, obj2); // good practice to give empty parenthesis
const obj3 = {...obj1, ...obj2} // spread operator-> best way to merge objects [best practice]
console.log(obj3);


// database values handeling
const users = [
    {
        id: 1,
        name: "Ayush",
        email: "ayush@gmail.com"
    },
    {
        id: 2,
        name: "Rajiv",
        email: "rajiv@yahoo.com"
    },
    {
        id: 3,
        name: "Goyal",
        email: ""
    }
]

// console.log(users[1].email)

console.log(tinderUser)
console.log(Object.keys(tinderUser))
console.log(Object.values(tinderUser))
console.log(Object.entries(tinderUser))

console.log(tinderUser.hasOwnProperty("name"))
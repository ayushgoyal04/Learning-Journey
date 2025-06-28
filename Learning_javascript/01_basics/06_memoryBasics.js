/**
 * Memory is js is divided into two parts: stack and heap
 * 
 * All primitive data types are stored in-> stack memory
 * Non primitive data types are stored in-> heap memory
 * 
 * Stack-> We get the copy of the variable
 * Heap-> We get the reference of the variable
 */

let myYoutubeName = "Ayush Goyal";

let myYoutubeNameCopy = myYoutubeName;
myYoutubeNameCopy = "Ayush Goyal 2.0";

// console.log(myYoutubeName); // Ayush Goyal
// console.log(myYoutubeNameCopy); // Ayush Goyal 2.0


let user1 = {
    email:  "user1@gmail.com",
    name: "User 1",
    phoneNumber: 1234567890,
}

let user2 = user1;

user2.name = "User 2";
user2.email = "abc@yahoo.com";

console.log(user1.email); 
console.log(user2.email); 

console.log(user1);
console.log(user2);

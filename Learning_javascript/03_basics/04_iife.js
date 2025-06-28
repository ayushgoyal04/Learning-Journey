// Immediately Invoked Function Expressions (IIFE)-> Functions whhich will be immediately executed
// Used to avoid the global scope pollution problem

(function chai(){
    // named IIFE
    console.log("DataBase conection successful");
})(); // ; needed to end the IIFE

( (name) => {
    // Simple IIFE
    console.log(`DB Connected 2 ${name}`);
    
})("Ayush");
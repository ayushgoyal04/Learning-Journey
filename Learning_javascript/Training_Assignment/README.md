Final Assessment [ 100 Marks, 1-1.5 hours ]

JavaScript Assignment Programs
1. Arrays
1. Write a function to find the largest number in an array-
function findlargest(arr){
    var large = arr[0];
    for(var i=1; i<arr.size(); i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}

2. Reverse a given array without using built-in reverse().
function reverse(arr){
    var first = 0;
    var last = arr.size()-1;
    while(first<last){
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
    return arr;
}


3. Remove duplicate elements from an array.
function removeDuplicates(arr){
    var uniqueArr = [];
    for(var i=0; i<arr.length; i++){
        if(uniqueArr.indexOf(arr[i]) === -1){
            uniqueArr.push(arr[i]);
        }
    }
    return uniqueArr;
}


4. Find the sum of all even numbers in an array.
function SumOfEven(arr){
    var sum = 0;
    for(var i =0; i<arr.size(); i++){
        if(arr[i]%2==0){
        sum += arr[i];
        }
    }
    return sum;
}


5. Merge two arrays and sort them in ascending order.
function mergeAndSort(arr1, arr2){
    var merged = arr1.concat(arr2);
    for(var i=0; i<merged.length-1; i++){
        for(var j=i+1; j<merged.length; j++){
            if(merged[i] > merged[j]){
                var temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    return merged;
}



2. Functions
1. Create a function that calculates factorial using recursion.
function factorial(n){
    if(n === 0 || n === 1){
        return 1;
    }
    return n * factorial(n-1);
}

2. Write a function that checks if a string is a palindrome.
function isPalindrome(str){
    var len = str.length;
    for(var i=0; i<len/2; i++){
        if(str[i] !== str[len-1-i]){
            return false;
        }
    }
    return true;
}

3. Implement a function that counts vowels in a string.
function countVowels(str){
    var count = 0;
    var vowels = "aeiouAEIOU";
    for(var i=0; i<str.length; i++){
        if(vowels.indexOf(str[i]) !== -1){
            count++;
        }
    }
    return count;
}

4. Create a function that accepts another function as a parameter and invokes it.
function invokeFunction(fn){
    fn();
}

5. Write a closure that maintains a private counter.
function createCounter(){
    var count = 0;
    return function(){
        count++;
        return count;
    }
}



3. Async/Await
1. Create a function that fetches data from an API using async/await.
async function fetchData(url) {
    const response = await fetch(url);
    const data = await response.json();
    return data;
}

2. Chain two API calls and process the results using async/await.
async function chainApiCalls(url1, url2) {
    const data1 = await fetchData(url1);
    const data2 = await fetchData(url2);
    // Example: return both results as an object
    return { data1, data2 };
}

3. Use setTimeout inside an async function to simulate a delay.
async function delay(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

4. Handle an error using try/catch in an async function.
async function fetchWithErrorHandling(url) {
    try {
        const data = await fetchData(url);
        return data;
    } catch (error) {
        console.log('Error:', error);
        return null;
    }
}

5. Write a function that runs multiple async tasks in parallel and logs the results.
async function runParallel(tasks) {
    const results = await Promise.all(tasks.map(task => task()));
    console.log(results);
    return results;
}



4. Promises
1. Create a function that returns a promise and resolves after 2 seconds.
function resolveAfter2Seconds() {
    return new Promise(resolve => {
        setTimeout(() => {
            resolve('Resolved after 2 seconds');
        }, 2000);
    });
}

2. Chain multiple promises to simulate a sequential task.
function sequentialTasks() {
    return new Promise(resolve => {
        setTimeout(() => {
            resolve('First task done');
        }, 1000);
    }).then(result1 => {
        return new Promise(resolve => {
            setTimeout(() => {
                resolve(result1 + ', Second task done');
            }, 1000);
        });
    });
}

3. Use Promise.all to resolve three async tasks.
function asyncTask(msg, ms) {
    return new Promise(resolve => setTimeout(() => resolve(msg), ms));
}
function resolveThreeTasks() {
    return Promise.all([
        asyncTask('Task 1', 1000),
        asyncTask('Task 2', 1500),
        asyncTask('Task 3', 500)
    ]);
}

4. Convert a callback-based function to a Promise.
function callbackToPromise(fn, ...args) {
    return new Promise((resolve, reject) => {
        fn(...args, function(err, result) {
            if (err) reject(err);
            else resolve(result);
        });
    });
}

5. Handle a rejected promise gracefully.
function handleRejectedPromise() {
    return Promise.reject('Some error').catch(error => {
        console.log('Caught error:', error);
        return 'Handled error';
    });
}



5. Objects
1. Create a student object with name, age, and a method to print details.
var student = {
    name: 'John',
    age: 20,
    printDetails: function() {
        console.log('Name: ' + this.name + ', Age: ' + this.age);
    }
};

2. Write a function that clones an object deeply.
function deepClone(obj) {
    return JSON.parse(JSON.stringify(obj));
}

3. Merge two objects and log the result.
function mergeObjects(obj1, obj2) {
    var merged = Object.assign({}, obj1, obj2);
    console.log(merged);
    return merged;
}

4. Loop through all keys and values of an object.
function printObject(obj) {
    for(var key in obj) {
        if(obj.hasOwnProperty(key)) {
            console.log(key + ': ' + obj[key]);
        }
    }
}

5. Convert an object to an array of key-value pairs.
function objectToPairs(obj) {
    var pairs = [];
    for(var key in obj) {
        if(obj.hasOwnProperty(key)) {
            pairs.push([key, obj[key]]);
        }
    }
    return pairs;
}



6. Node.js Assignment Programs
Topics: FS Module, Events, Path, OS, HTTP

1. Read and write data to a file using the fs module.
const fs = require('fs');
fs.writeFileSync('example.txt', 'Hello, Node.js!');
const data = fs.readFileSync('example.txt', 'utf8');
console.log(data);

2. Create a custom event and listen for it using the events module.
const EventEmitter = require('events');
const emitter = new EventEmitter();
emitter.on('greet', function(name) {
    console.log('Hello, ' + name + '!');
});
emitter.emit('greet', 'Alice');

3. Get system information using the os module.
const os = require('os');
console.log('Platform:', os.platform());
console.log('CPU Architecture:', os.arch());
console.log('Total Memory:', os.totalmem());
console.log('Free Memory:', os.freemem());

4. Build a simple HTTP server that responds with "Hello, World!"
const http = require('http');
const server = http.createServer((req, res) => {
    res.writeHead(200, {'Content-Type': 'text/plain'});
    res.end('Hello, World!');
});
server.listen(3000, () => {
    console.log('Server running at http://localhost:3000/');
});

5. Parse a file path and log its components using the path module.
const path = require('path');
const filePath = 'C:/Users/Example/file.txt';
console.log('Dirname:', path.dirname(filePath));
console.log('Basename:', path.basename(filePath));
console.log('Extname:', path.extname(filePath));



7. Express.js Assignment Programs
Topics: Routing, Middleware, REST API, Query & Params, Error Handling

const express = require('express');
const app = express();
app.use(express.json());

1. Create basic routes for a product app: GET, POST, PUT, DELETE.
let products = [{ id: 1, name: 'Book' }];
app.get('/products', (req, res) => res.json(products));
app.post('/products', (req, res) => {
    const prod = { id: products.length+1, ...req.body };
    products.push(prod);
    res.status(201).json(prod);
});
app.put('/products/:id', (req, res) => {
    const id = parseInt(req.params.id);
    const idx = products.findIndex(p => p.id === id);
    if(idx !== -1) {
        products[idx] = { ...products[idx], ...req.body };
        res.json(products[idx]);
    } else res.status(404).json({ error: 'Not found' });
});
app.delete('/products/:id', (req, res) => {
    const id = parseInt(req.params.id);
    products = products.filter(p => p.id !== id);
    res.json({ message: 'Deleted' });
});

2. Implement custom middleware that logs request details.
app.use((req, res, next) => {
    console.log(`${req.method} ${req.url}`);
    next();
});

3. Handle route parameters (e.g., /user/:id) and return user details.
app.get('/user/:id', (req, res) => {
    res.json({ id: req.params.id, name: 'User'+req.params.id });
});

4. Use query strings (e.g., /search?q=book) and return filtered data.
app.get('/search', (req, res) => {
    const q = req.query.q;
    const filtered = products.filter(p => p.name.toLowerCase().includes(q.toLowerCase()));
    res.json(filtered);
});

5. Setup error handling middleware and return structured error responses.
app.use((err, req, res, next) => {
    res.status(500).json({ error: err.message || 'Internal Server Error' });
});

app.listen(3000, () => console.log('Express server running'));



8. MongoDB & Mongoose Assignment Programs
const mongoose = require('mongoose');

1. Connect to MongoDB using Mongoose.
mongoose.connect('mongodb://localhost:27017/blogdb', { useNewUrlParser: true, useUnifiedTopology: true });

2. Define a schema and model for a blog with title, body, and date.
const blogSchema = new mongoose.Schema({
    title: String,
    body: String,
    date: { type: Date, default: Date.now }
});
const Blog = mongoose.model('Blog', blogSchema);

3. Insert multiple blog posts using Mongoose.
async function insertBlogs() {
    await Blog.insertMany([
        { title: 'First', body: 'First post' },
        { title: 'Second', body: 'Second post' }
    ]);
}

4. Find all posts with a specific keyword using a filter.
async function findBlogsByKeyword(keyword) {
    return await Blog.find({ body: { $regex: keyword, $options: 'i' } });
}

5. Update a document and return the updated version.
async function updateBlog(id, update) {
    return await Blog.findByIdAndUpdate(id, update, { new: true });
}



9. MongoDB Aggregation & Pipeline Assignment

// Scenario: E-commerce orders collection
// Collection: orders
// Sample Document:
// {
//   orderId: 101,
//   customer: "Alice",
//   total: 1200,
//   items: [
//     { product: "Laptop", price: 1000, qty: 1 },
//     { product: "Mouse", price: 200, qty: 1 }
//   ],
//   status: "completed"
// }

// Task: Find total sales per product, only for completed orders.

// Aggregation Pipeline in JavaScript (Node.js with Mongoose):
async function getTotalSalesPerProduct() {
    const result = await orders.aggregate([
        { $match: { status: "completed" } },
        { $unwind: "$items" },
        {
            $group: {
                _id: "$items.product",
                totalSales: { $sum: { $multiply: ["$items.price", "$items.qty"] } }
            }
        },
        { $sort: { totalSales: -1 } }
    ]);
    return result;
}

// Explanation:
// $match: Filters only completed orders.
// $unwind: Flattens the items array.
// $group: Aggregates total sales per product.
// $sort: Sorts in descending order of sales.


10. React Assignment Programs
Topics: Components, useState, useEffect, Routing, Context API

1. Create a functional component that toggles light/dark mode using useState.
import React, { useState } from 'react';
function ThemeToggler() {
    const [dark, setDark] = useState(false);
    return (
        <div style={{ background: dark ? '#222' : '#fff', color: dark ? '#fff' : '#000', padding: 20 }}>
            <button onClick={() => setDark(!dark)}>
                Toggle {dark ? 'Light' : 'Dark'} Mode
            </button>
        </div>
    );
}

2. Fetch user data from an API in useEffect and render it in a table.
import React, { useEffect, useState } from 'react';
function UserTable() {
    const [users, setUsers] = useState([]);
    useEffect(() => {
        fetch('https://jsonplaceholder.typicode.com/users')
            .then(res => res.json())
            .then(data => setUsers(data));
    }, []);
    return (
        <table border="1">
            <thead><tr><th>Name</th><th>Email</th></tr></thead>
            <tbody>
                {users.map(u => <tr key={u.id}><td>{u.name}</td><td>{u.email}</td></tr>)}
            </tbody>
        </table>
    );
}

3. Build a multi-page app using React Router (Home, About, Contact).
import React from 'react';
import { BrowserRouter, Routes, Route, Link } from 'react-router-dom';
function Home() { return <h2>Home</h2>; }
function About() { return <h2>About</h2>; }
function Contact() { return <h2>Contact</h2>; }
function AppRouter() {
    return (
        <BrowserRouter>
            <nav>
                <Link to="/">Home</Link> | <Link to="/about">About</Link> | <Link to="/contact">Contact</Link>
            </nav>
            <Routes>
                <Route path="/" element={<Home />} />
                <Route path="/about" element={<About />} />
                <Route path="/contact" element={<Contact />} />
            </Routes>
        </BrowserRouter>
    );
}

4. Use Context API to manage and share theme state across components.
import React, { createContext, useContext, useState } from 'react';
const ThemeContext = createContext();
function ThemeProvider({ children }) {
    const [theme, setTheme] = useState('light');
    return (
        <ThemeContext.Provider value={{ theme, setTheme }}>
            {children}
        </ThemeContext.Provider>
    );
}
function ThemedComponent() {
    const { theme, setTheme } = useContext(ThemeContext);
    return (
        <div style={{ background: theme === 'dark' ? '#222' : '#fff', color: theme === 'dark' ? '#fff' : '#000' }}>
            <button onClick={() => setTheme(theme === 'dark' ? 'light' : 'dark')}>
                Toggle Theme
            </button>
        </div>
    );
}

5. Create a form component and handle input using controlled components.
import React, { useState } from 'react';
function MyForm() {
    const [input, setInput] = useState('');
    const handleSubmit = e => {
        e.preventDefault();
        alert('Submitted: ' + input);
    };
    return (
        <form onSubmit={handleSubmit}>
            <input value={input} onChange={e => setInput(e.target.value)} />
            <button type="submit">Submit</button>
        </form>
    );
}

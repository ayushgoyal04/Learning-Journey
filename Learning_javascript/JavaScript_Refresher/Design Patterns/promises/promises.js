let fs = require("fs")

function letsRead(filename) {
    return new Promise(function (resolve, reject) { // internal state [pending]-> the promise is unsetelled
        // letsRead i tryign to return a promise state called as resolved
        fs.readFile(filename, { encoding: "utf-8" }, function (err, contents) {
            if (err) {
                reject(err);
                return;
            }
            resolve(contents);
        });
    });
}

// Use the correct relative path for the file
let path = require("path");
let filePath = path.join(__dirname, "example.txt");
let p1 = letsRead(filePath)

// pronounced tenable
let p2 = p1.then(function (contents) { // [resolved]-> then the promise is setelled
    console.log("from p1 : " + contents);
}, function (err) {
    console.error(err.message)
});

p2.then(function () {
    console.log("p2 is resolved");
})

    // find element in array
    // add all elements in an array
    // find char in string 
    // find vowels in string using recursion
    // find last call in factorial function should be recursion fn
    
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find an element in an array
// bool findElem(int arr[], int size, int e, int i) {
//     if(i==size){
//         return i;
//     }
//     if(arr[i]==e){

//         cout<<"Element found at index "<<i<<endl;
//         return true;
//     }
//     findElem(arr, size, e, i+1);
    
    
// }

// // Function to add all elements in an array
// int addElements(int arr[], int sum, int i) {
//     if(i == 5){
//         return sum;
//     }

//     sum = sum + arr[i];
//     addElements(arr, sum, i+1);


// }

// // Function to find a character in a string
// bool findCharInString(string str, char c, int i) {
//     if(i==str.length()){
//         return i;
//     }    
//     if(str[i] == c){
//         return true;
//     }
//     findCharInString(str, c, i+1);

// }

// // Function to find vowels in a string using recursion
// int findVowelsInString(string str) {
    
// }

// // Function to calculate factorial using recursion
// int factorial(int n) {
//     if (n <= 1) return 1;
//     return n * factorial(n - 1);
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int element = 4, i=0;
    
//     // Check if element is in array
//      findElem(arr, 5, element,i);
    
//     // Add all elements in the array
//     int summ =0;
//     int sum = addElements(arr, summ, i);
//     cout << "Sum of all elements in the array: " << sum << endl;
    
//     // Find character in string
//     string str = "Hello, World!";
//     char charToFind = 'o';
//     if(findCharInString(str, charToFind, i)){
//         cout<<"Char "<<charToFind<< " found in the string"<<endl;
//     }
//     else{
//         cout<<"Char "<<charToFind<< " not found in the string"<<endl;
//     }
    
//     // // Find vowels in string
//     // int vowelCount = findVowelsInString(str);
//     // cout << "Number of vowels in the string: " << vowelCount << endl;
    
//     // Calculate factorial
//     int number = 5;
//     int fact = factorial(number);
//     cout << "Factorial of " << number << " is " << fact << endl;
    
//     // return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Function to find an element in an array
bool findElem(int arr[], int size, int e, int i) {
    if (i == size) {
        cout << "Element not found" << endl;
        return false;
    }
    if (arr[i] == e) {
        cout << "Element found at index " << i << endl;
        return true;
    }
    return findElem(arr, size, e, i + 1);
}

// Function to add all elements in an array
int addElements(int arr[], int size, int sum, int i) {
    if (i == size) {
        return sum;
    }
    return addElements(arr, size, sum + arr[i], i + 1);
}

// Function to find a character in a string
bool findCharInString(string str, char c, int i) {
    if (i == str.length()) {
        return false;
    }
    if (str[i] == c) {
        return true;
    }
    return findCharInString(str, c, i + 1);
}

// Function to find vowels in a string using recursion
int findVowelsInString(string str, int i) {
    if (i == str.length()) {
        return 0;
    }
    char ch = str[i];
    int count = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 1 : 0;
    return count + findVowelsInString(str, i + 1);
}

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int element = 4, i = 0;
    
    // Check if element is in array
    findElem(arr, 5, element, i);
    
    // Add all elements in the array
    int summ = 0;
    int sum = addElements(arr, 5, summ, i);
    cout << "Sum of all elements in the array: " << sum << endl;
    
    // Find character in string
    string str = "Hello, World!";
    char charToFind = 'o';
    if (findCharInString(str, charToFind, i)) {
        cout << "Character '" << charToFind << "' found in the string." << endl;
    } else {
        cout << "Character '" << charToFind << "' not found in the string." << endl;
    }
    
    // Find vowels in string
    int vowelCount = findVowelsInString(str, i);
    cout << "Number of vowels in the string: " << vowelCount << endl;
    
    // Calculate factorial
    int number = 5;
    int fact = factorial(number);
    cout << "Factorial of " << number << " is " << fact << endl;
    
    return 0;
}

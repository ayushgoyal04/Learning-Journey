#include<iostream>

int main(){
    // simple 1d array
    // int* array = new int[5];

    // a pointer to a collection of pointer where each pointer is a pointer to an array itself (2D array)
    int** a2d = new int*[5];

    for(int i = 0; i < 5; i++){
        // creating an array fpr each pointer we have stored in the array of pointers
        a2d[i] = new int[5];
    }

    // deleting the memory allocatd from above->
    for(int i = 0; i < 5; i++){
        delete[] a2d[i];
    }
    delete[] a2d;
}

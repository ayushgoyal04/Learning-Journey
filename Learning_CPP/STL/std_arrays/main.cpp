#include <iostream>
#include <array>

void PrintArray(int* array, unsigned int size){
    for(int i = 0; i < size; i++){

    }
}

void PrintArray (const std::array<int, 5>& data){
    for(int i = 0; i < data.size(); i++){

    }
}

// one advantage of newer array over old array is the fact that std arrays are a class so it comes baked in with some functionalities like sort functions etc, and aso in the older versions of the array we had to maintain a size variable which is automatically done for us in the new std arrays  

int main(){
    std::array<int, 5> data;
    data[0] = 4;
    data[1] = 1;

    // old style arrays
    int datatold[5];
    datatold[0] = 32;
}

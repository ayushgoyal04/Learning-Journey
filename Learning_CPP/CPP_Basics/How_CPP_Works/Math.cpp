/*
g++ -E Math.cpp -o Math.i

#define INTEGER int

INTEGER Multiply(int a, int b){
    INTEGER result = a * b;
    return result;

    #include "endBrace.h"

*/


/**
    g++ -E Math.cpp -o Math.i

 the #if preprocessor statement can lead us include or exclude code based on a given condition
 #if 0       //exclude (disable)
 #if 1          // include
 int Multiply(int a, int b){
    int result = a * b;
    return result;
}

#endif
*/

// #include <bits/stdc++.h> // inlcudes about 1.3 L lines of code
// #include "iostream" // includes about 35k lines of code

#include "iostream"

// void Log(const char* message){
//      std::cout<<message<<std::endl;
// }

void Log(const char* message);

// adding static means that this Multiply function will only be called inside this file or this translation

// inline keyword can also be used instead of static
static int Multiply(int a, int b){
    // int result = a * b;
    // return result;
    // Log("multiply");
    return a * b;
}


int main(){
    std::cout<< Multiply(54, 8) <<std::endl;
}

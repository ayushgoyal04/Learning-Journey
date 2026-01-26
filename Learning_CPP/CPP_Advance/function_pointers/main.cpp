#include <iostream>
#include <vector>

// function pointers are a way to assign functions to a variable.

// void hello(int a){
//     std::cout<<"Hello world: "<<a<<std::endl;

// }

// int main(){

//     // hello();

//     // gettign the function pointer ie the memory adress of that function
//     auto function = hello;
//     // type - void(*functionname)()

//     function(2);
//     function(3);
//     function(5);

// }


// useful example

void Print(int value){
    std::cout<<"VAlue: "<<value<<std::endl;
}

void forEach(const std::vector<int>& values, void(*func)(int)){
    for (int value: values){
        func(value);
    }
}

int main (){
    std::vector<int> values = {1, 2, 3,4, 5, 6, 7, 8, 9};

    forEach(values, Print);

}

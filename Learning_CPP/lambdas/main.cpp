#include <iostream>
#include <vector>


void forEach(const std::vector<int>& values, void(*func)(int)){
    for (int value: values){
        func(value);
    }
}

int main (){
    std::vector<int> values = {1, 2, 3,4, 5, 6, 7, 8, 9};

    // the [] os the capture group ie how we want to pass varuables/ parameters in to the lambda function 
    auto lambda = [](int value){std::cout<<"VAlue: "<<value<<std::endl;};

    forEach(values, lambda);

}

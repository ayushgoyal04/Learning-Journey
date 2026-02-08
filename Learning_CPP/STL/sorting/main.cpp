#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

int main(){
    std::vector<int> values = {3, 4, 6, 23, 2, 5, 78, 4};

    // ascending
    std::sort(values.begin(), values.end());
    std::sort(values.begin(), values.end(), [](int a, int b){
        return a < b;
    });

    // descending
    std::sort(values.begin(), values.end(), std::greater<int>());
    std::sort(values.begin(), values.end(), [](int a, int b){
        // we can set additional rules here also
        return a > b;
    });


    for(int value: values){
        std::cout<<value<<std::endl;
    }
}

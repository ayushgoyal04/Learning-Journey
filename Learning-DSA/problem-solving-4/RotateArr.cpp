// code studio 189. Rotate Array
#include<bits/stdc++.h>
using namespace std;

void rotate(){
    vector<int > temp(m);
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()] = nums[i];
    }
nums = temp;
}

int main(){
    
}
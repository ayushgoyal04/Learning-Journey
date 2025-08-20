#include<iostream>
using namespace std;

void counting(int n){
    for (int i=0;i<=n;i++){
        cout<< i << " ";
    }
}

int main(){
    int num;
    cin>> num;
    counting(num);
}
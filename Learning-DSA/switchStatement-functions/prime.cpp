#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        cout<<"1 is a unique number"<< endl;
    }
    else{for(int i =2; i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }  
    }
    return 1;
    }
}

int main(){
    int num;
    cin>> num;
    if(num != 1){ 
    if(isPrime(num)){
        cout<< num << " Is prime"<< endl;
    }
    else cout<<num<<" Is not prime"<< endl;
    }
    else isPrime(num);

}
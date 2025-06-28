#include<iostream>
using namespace std;

int factorial(int n){
    int factorial = 1;
    if (n == 0){
        return 1;
    }
    else{ 
    for(int i = 1; i<=n; i++){
        factorial = factorial * i;
    }
    return factorial;
    }
}

int ncr(int n, int r){
    int answer = 1;
    answer = (factorial(n)/(factorial(r)*factorial(n-r)));
    return answer;
}

int main(){
    int n,r;
    cin >> n >> r;
    cout<< ncr(n,r) << endl;
}
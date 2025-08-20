#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if (n==0||n==1) return n;

    // int f1 = fibo(n-1);
    // int f2 = fibo(n-2);
    // return f1+f2;
    return fibo(n-1)+fibo(n-2);

}

int main(){
    
    int n = 6;
    // 1 1 2 3 5 8
        
    int nthTerm = fibo(n);
    cout<<n<< " term is "<<nthTerm<<endl;

    for(int i=0;i<=n;i++)
    cout<<fibo(i)<<" ";
    }
#include<bits/stdtr1c++.h>
using namespace std;
# define nl cout<<endl;

void nthfibbo(int n){
    int temp = n, first=0, second=1;
    int fibbo;
    
    for (int i =0; i<=n-1; i++){
            fibbo= first+second;
            // cout<<fibbo<<" ";
            first = second;
            second = fibbo;
    }
    
    cout<<fibbo;
}


int main(){
    long long int n;
    cin>>n;
    if(n==0){
        cout<<"1"<<endl;
    }
    else
    nthfibbo(n);
}
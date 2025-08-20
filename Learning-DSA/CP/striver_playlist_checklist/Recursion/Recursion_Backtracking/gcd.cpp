#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return findGcd(a-b,b);
        return findGcd(a, b-a);

}

int main(){
    cout<<"Enter 2 numbers"<<endl;
    int a,b;
    cin>>a>>b;
    int gcd = findGcd(a,b);
    cout<<"Gcd is "<<gcd<<endl;
}
// 14 0
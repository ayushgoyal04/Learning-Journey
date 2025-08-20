#include<bits/stdc++.h>
using namespace std;

int DigitSum(int n){

    int ans=0;
    int temp = n;
    
    while(temp>0){ 
    ans += temp % 10;
    temp = temp/10;
    }
    
    if(ans<10) return ans;
    else return DigitSum(ans);

}

int main(){
    int n;
    cin>>n;
int ans = DigitSum(n);
cout<<ans<<" ";
}
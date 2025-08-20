#include<bits/stdtr1c++.h>
using namespace std;
# define nl cout<<endl;

void digitCount(long long int n){
    long long int temp=n;
    if(n<0){
        n = n* (-1);
    }
    int count=0;
    
    while(n > 0){
        n = n / 10;
        count++;
    }
    if(temp==0){
        count=1;
        cout<<count;
        }
        else{ 
        cout<<count;
        }
        nl
}

void reverseNum(long long int n){
    long long int temp;
    while(n>0){
        temp = n % 10;
        cout<<temp;
        n = n / 10;
    }
    nl
}

void checkPalindrome(long long int n){
    string temp = to_string(n);
    string temp1 = temp;

    // reverse the string
    reverse(temp1.begin(), temp1.end());

    // check if same
    if(temp1 == temp){
        cout<<"The number is a palindrome "<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    nl;
}

void checkArmstrong(long long int n){
    long long int temp = n, arm = 0, check=0;
    while(temp > 0){
       long long int num = temp % 10;
        // 153- num = 3
        arm = num*num*num;
        check = check + arm;
        temp = temp/10;
    }
    if(n==check){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not armstrong";
    }
    nl
}


void fibbo(int n){
    
    int temp = n, first=0, second=1;
    int fibbo;
    cout<<first<<" "<<second<<" ";
    for (int i =0; i<n-2; i++){
            fibbo= first+second;
            cout<<fibbo<<" ";
            first = second;
            second = fibbo;
    }
}

void nthfibbo(int n){
    int temp = n, first=0, second=1;
    int fibbo;
    
    for (int i =0; i<n-1; i++){
            fibbo= first+second;
            // cout<<fibbo<<" ";
            first = second;
            second = fibbo;
    }
    nl
    cout<<first;
}



int main(){
    long long int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    // digitCount(n);
    // nl
    // reverseNum(n);
    // nl
    // checkPalindrome(n);
    // nl
    // checkArmstrong(n);
    // nl
      fibbo(n);
     nl
     // nthfibbo(n);
}
#include<iostream>
using namespace std;
int main(){
//     int n;
//     cin>>n;
// // a=cin.get() is used to get character
//     if (n>0){
//         cout << "n is positive";
//     }
//     else{
//         cout<< "n is negative";
//     }


// cout<< "Enter n : ";
// cin >> n;
// int sum=0;
// for (int i=0; i<=n ;i++){
//     sum+= i;
// }
// cout<<sum;


//fibonacci series

// int n = 10;
// int a = 0;
// int b=1;
// cout << a<<" "<< b<< " ";
//  for (int i =1; i< n; i++){
//     int next = a+b;
//     cout<< next<< " ";
//     a=b;
//     b=next;
//  }


// prime or not

// int i;
// int n=27;
// bool isPrime=1;
// for(i=2; i<n;i++)
// {
//     if(n%i==0){
//         isPrime=0;
//         break;
//     }
// }
// if(isPrime==0){
//     cout<< "Not a prime no.";
// }
// else{
//     cout<< "Prime no";
// }

// sum and products of the digits of a nummber
// int n;
// int product = 1;
// int sum = 0;
// cout<< "Enter a number : ";
// cin>> n ;
// while (n!=0)
// {
//     int rem = n%10;
//     sum += rem;
//     product *= rem;
//     n = n/10;

// }
// cout<< "The sum is : "<< sum << endl;
// cout<< "The product is : "<< product << endl;
// int ans = product  - sum;
// cout << "The final answer is : "<< ans << endl;


// counting 1 in a binary number
int  n = 010;
int count  = 0;
while(n!=-0){
    if(n&1){
        count ++;
    }
    n = n>>1;
}
cout<< count;
return count;

}
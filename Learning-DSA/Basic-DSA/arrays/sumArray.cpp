#include<iostream>
using namespace std;

void arrSum(int arr[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    cout<<"Sum is " <<sum;
}

int main (){
    int arr[1000];
    int n;
    cout<<"Enter the no. of elements to add"<<endl;
    cin>> n;
    cout<<"Enter elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    arrSum(arr, n);
    
    }
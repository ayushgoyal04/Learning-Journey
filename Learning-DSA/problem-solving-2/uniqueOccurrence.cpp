#include<iostream>
using namespace std;

bool uniqueOccur(int arr[], int n){
    
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the no. of elements of the array"<<endl;
    cin>> n;
    cout<<"Enter elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Ans "<<uniqueOccur(arr, n)<<endl;
}
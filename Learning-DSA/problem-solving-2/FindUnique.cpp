#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    int xorGate;
    int unique = arr[0];
    
    for (int i=1;i<n;i++){
        unique= unique xor arr[i];
    }
    return unique;
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the no. of elements of the array"<<endl;
    cin>> n;
    n = 2*n +1;
    cout<<"Enter elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Ans "<<findUnique(arr, n)<<endl;;
}
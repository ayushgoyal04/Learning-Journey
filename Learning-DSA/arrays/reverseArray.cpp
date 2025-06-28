#include<iostream>
using namespace std;

// int swap(int a, int b){
//     int temp=0;
//     temp = 1;
//     a = b;
//     b = temp;
//     return a, b;
// }

void reverse(int arr[], int size){
    int start=0;
    int end= size-1;
    
    while(start<=end){ 
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
}

void reversePrint(int arr[], int size){
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the no. of elements of array"<<endl;
    cin>> n;
    cout<<"Enter elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }


    reverse(arr, n);
    // reverse(brr, 5);

    reversePrint(arr, n);
    // reversePrint(brr, 5);
}
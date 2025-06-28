#include<iostream>
using namespace std;

// Function declaration
void printArray(int arr[], int size);

void swapAlternate(int arr[], int n){
    int size = n;
    for(int i=0; i<n; i+=2){
        if(i+1 < size){ // Size is index of the array
            swap(arr[i], arr[i+1]);
        }
    }
    printArray(arr, size);    
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    swapAlternate(arr, n);
}

// Selection sort-
// total iterations- (n-1) for array[n]
// Time complexity- O(n(n-1)/2) = O(n^2)


#include<iostream>
using namespace std;
void printArray(int arr[], int n);
void SelectionSort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int minIndex = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    
    }
    printArray(arr, 9);

}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" "<<endl;
    }
}

int main(){
    int arr[9] = {9,8,7,6,5,4,3,2,1};
    SelectionSort(arr, 9);

}
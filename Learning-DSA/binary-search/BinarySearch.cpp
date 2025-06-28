// Always either increasing or decreasing order(monotonic functions) only
// complexity- O(lognN)

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    
    while(start <= end){
        int mid = start + (end - start) / 2; // Calculate mid inside the loop

        if(key == arr[mid]){
            return true;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return false; // Return false if the element is not found
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements of the array"<<endl;
    cin>> n;
    cout<<"Enter elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search"<<endl;
    int key;
    cin>>key;
    bool IsPresent = binarySearch(arr, n, key); // Changed the type to bool
    if(IsPresent){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element not present"<<endl;
    }
    return 0; // Added return statement in main
}


// code of love babbar
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }


// int main() { 

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = binarySearch(even, 6, 6);

//     cout << " Index of 6 is " << evenIndex << endl;

//     int oddIndex = binarySearch(odd, 5, 14);

//     cout << " Index of 14 is " << oddIndex << endl;


//     return 0;
// }

// int findPeak(int arr[], int n) {

//     int s =0, e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         //cout<<" s " << s <<" e " << e << endl;
//         if(arr[mid] < arr[mid+1]){
//             s = mid+1; 
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

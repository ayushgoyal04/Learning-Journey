#include<bits/stdtr1c++.h>
using namespace std;
// int main(){
//     int n=5;
//     int j;
    
//     int arr[5] = {1,2,1,2,3};
//     for(int i=0; i<n; i++){
//         int count=0;
//         int temp = arr[i];
//         for(j=0; j<n; j++){
            
//             if(i!=j){ 
//             if(temp == arr[j] ){
//                count++; 
//             }
//         }
//         }
//     if(count != 1){
//             cout<< arr[i];
//         }
//     }
// }

int main(){
    int n=5;
    int j;    
    int arr[5] = {1,2,3,2,3};
    sort(arr, arr+5); // sort(arr, arr+n)
    for(int i=0; i<n; i=i+2){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i];
            break;
        }
    }
}
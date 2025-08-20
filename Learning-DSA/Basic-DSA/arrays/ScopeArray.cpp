#include<iostream>
using namespace std;

void update(int array[], int n){
    cout<< "Inside"<< endl;
// updating the array
    array[0] = 120;

    for (int i=0; i<3; i++){
        cout<< array[i]<< " ";
    }cout<<endl;

    cout<< "Going to main fn"<<endl;
}

int main(){
    int arr[3]= {1,2,3};

    update(arr, 3);
    cout<<"Printing in main"<<endl;
    for (int i=0; i<3; i++){
        cout<< arr[i]<< " ";
    }cout<<endl;
    // update(arr, 3);

}
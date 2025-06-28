#include<bits/stdc++.h>
using namespace std;

void reverse(char arr[], int n){

    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s++], arr[e--]);

    }
    cout<<"Reversed: "<<arr;
}


int getLength(char name[]){

    int count = 0;
    for (int i=0; name[i] != '\0'; i++)
    count++;
    return count;
}

int main(){

    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    int length_of_string = getLength(name);
    // cout<<"Length: "<<length_of_string<<endl;

    reverse(name, length_of_string );
}
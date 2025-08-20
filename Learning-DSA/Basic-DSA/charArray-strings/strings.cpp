// strings in c++ are noting but 1 dimensionsal character arrays.

// null character is stored in the end \0 (The string ends here)

// The char array will stop at the 1st null char, even if there are other characters in the array, it doesn't matter.
#include<bits/stdc++.h>
using namespace std;
int main(){

    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    // This will not pick up space, tab, new line (If input is Ayush Goyal, the output will be Ayush)

    cout<<"Your name is: ";
    cout<< name << endl;

    return 0;
}
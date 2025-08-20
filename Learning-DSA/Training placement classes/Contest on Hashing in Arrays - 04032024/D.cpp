// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
    
//     int n = s.length();
//     int arr[200]={0};
//     for(int i=0;i<n;i++){
//         tolower(s[i]);
//         if(isalpha(s[i])){ 
//         int asci = (int)s[i];
//         arr[asci] = 1;
//         }
//     }
//     for(int i=97;i<=122;i++){
//         if(arr[i]!=1){
//             cout<<"not panagram"<<endl;
//             break;
//         }
//     }
//     cout<<"panagram"<<endl;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Modified to read the entire line including whitespaces
    
    int n = s.length();
    bool arr[26] = {false}; // Use bool array instead of int array
    
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) { 
            char c = tolower(s[i]); // Convert characters to lowercase
            arr[c - 'a'] = true; // Update the corresponding index in the array
        }
    }
    
    bool isPangram = true; // Assume it's a pangram initially
    
    for (int i = 0; i < 26; i++) {
        if (!arr[i]) {
            isPangram = false; // If any character is not present, it's not a pangram
            break;
        }
    }
    
    if (isPangram) {
        cout << "pangram" << endl;
    } else {
        cout << "not pangram" << endl;
    }
    
    return 0;
}

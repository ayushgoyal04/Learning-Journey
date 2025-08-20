// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore(); // Clear the input buffer

//     while (t--) {
//         string s;
//         getline(cin, s);

//         int n = s.length();
//         int v=0;
//         int co=0;
//         for(int i=0; i<n; i++){
//         if(s[i]=='U' ||s[i]=='O'||s[i]=='I' ||s[i]=='E'||s[i]=='A' ||s[i]=='u' ||s[i]=='o' ||s[i]=='i' ||s[i]=='e' ||s[i]=='a') v++;
//     else{
//         co++;
//     }
//     }
//     int w=1;
//     for(int i=1;i<n;i++){
//         // if(s[i]!=32){

//         // } //w++;
//         // else{
//         //     if(s[i]==)
//         //     w++;
//         // }
//         if(s[i]==32) w++;
//         if(s[i-1]==32 && s[i]==32){
//             w--;

//         }

//     }
//     cout<<w<<" "<<v<<" "<<co-w<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Clear the input buffer

    while (t--) {
        string s;
        getline(cin, s);

        int n = s.length();
        int vowels = 0;
        int consonants = 0;
        int words = 0;

        // Counting vowels, consonants, and words
        bool inWord = false; // Flag to check if we are inside a word
        for(int i = 0; i < n; i++) {
            if(isalpha(s[i])) { // Check if character is alphabet
                if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
                if(!inWord) {
                    inWord = true;
                    words++;
                }
            } else {
                inWord = false;
            }
        }

        cout << words << " " << vowels << " " << consonants << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;


// bool isPalindrome(string s) {
//     int left = 0;
//     int right = s.length() - 1;

//     while (left < right) {
//         // Skip non-alphanumeric characters
//         while (left < right && !isalnum(s[left])) left++;
//         while (left < right && !isalnum(s[right])) right--;

//         // Compare characters
//         if (tolower(s[left]) != tolower(s[right])) return false;

//         left++;
//         right--;
//     }

//     return true;
// }

// void palindromePartitioning(string ques, string ans, vector<string> v){
//     if(ques.length()==0){
//         v.push_back(ans);
//     }
//     for(int i=1;i<=ques.length();i++){
//         if(isPalindrome(ans)){
//             palindromePartitioning(ques.substr(i), ans+"|"+ques.substr(0,i), v);
//         }
//     }
// }




// int main(){
//     vector<string> v;
//     palindromePartitioning("aab", "", v);
// }


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare characters
        if (tolower(s[left]) != tolower(s[right])) return false;

        left++;
        right--;
    }

    return true;
}

void palindromePartitioning(string ques, string ans, vector<string>& v) {
    if (ques.empty()) {
        v.push_back(ans.substr(1)); // Remove the leading '|'
        return;
    }

    for (int i = 1; i <= ques.length(); i++) {
        string prefix = ques.substr(0, i);
        if (isPalindrome(prefix)) {
            palindromePartitioning(ques.substr(i), ans + "|" + prefix, v);
        }
    }
}

int main() {
    vector<string> v;
    palindromePartitioning("aab", "", v);

    // Print the results
    for (const string& partition : v) {
        cout << partition << endl;
    }

    return 0;
}

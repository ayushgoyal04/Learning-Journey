// condition- Do not create another string

// tip- if you want to convert any char to lower case- 
// if(char>='a' && char<='z'){
//     return char;
// }
// else{
//     temp = char - 'A' + 'a';
//     }

// integer = integer - '0'
#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(char s[], int n){
    int st = 0;
    int e = n-1;
    int check = 0;
    while (e > st)
    {
        if(s[e--]==s[st++])
        check = 1;
        else {
            check = 0;
            return check;
            }
    }
    return check;
    
}

int getLength(char name[]){

    int count = 0;
    for (int i=0; name[i] != '\0'; i++)
    count++;
    return count;
}

int main(){
    char s[20];

    cout<<"Enter String: ";
    cin>>s;

    int length_of_string = getLength(s);


    int ans = checkPalindrome(s, length_of_string);

    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}
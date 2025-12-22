#include <bits/stdc++.h>
using namespace std;

void print(string s)
{
    for(char c : s)
        cout << c << " ";
    cout << endl;
}

int main()
{
    int n = 3;
    string s = "abc";

    for(int i = 1; i < (1 << n); i++)   // start from 1 to avoid empty subsequence
    {
        string sub = "";
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j))
            {
                sub += s[j];
            }
        }
        print(sub);
    }
}

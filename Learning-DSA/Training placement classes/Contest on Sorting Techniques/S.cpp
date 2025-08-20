#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;

vector <vector<int> > v(n,vector<int>(3));
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j< 3; j++)
    {
        cin>>v[i][j];
    }
}
sort(v.begin(),v.end());
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j< 3; j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

}
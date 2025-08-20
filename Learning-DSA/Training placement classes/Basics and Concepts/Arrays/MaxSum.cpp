#include <bits/stdc++.h>
using namespace std;
// sum of 2 maximum value in arr in  O(n)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i< n ; i++)
    {
        cin>>arr[i];

    }
    int maxi=INT_MIN;
    int ans;
    int ans1;
    for(int i=0 ; i< n ; i++)
    {
      maxi=max(maxi,arr[i]);
    }
        int maxi1=INT_MIN;

    for(int i=0 ; i< n ; i++)
    {
        if(maxi!=arr[i])
      {
       maxi1=max(maxi1,arr[i]);

      }
    }
    cout<<maxi+maxi1<<endl;
}
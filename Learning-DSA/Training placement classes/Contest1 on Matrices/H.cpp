#include<bits/stdc++.h>
using namespace std;
//boundary in  cyclic form
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i =0 ; i< n ; i++)
    {
        for(int j= 0; j< n ; j++)
        {
            cin>>arr[i][j];
        }
    }

    int rowstart=0;
    int colstart=0;
    int rowend=n -1;
    int colend=n- 1;
    int total=n*n;
    while(total>0)
    {
    for(int i =colstart ; i<= colend && total>0 ;i++)
    {
        cout<<arr[rowstart][i]<<" ";
        total--;
    }
    rowstart++;
    for(int i =rowstart ; i<= rowend && total>0 ;i++)
    {
        cout<<arr[i][colend]<<" ";
        total--;
    }
    colend--;
    for(int i =colend ; i>= colstart  && total >0;i--)
    {
        cout<<arr[rowend][i]<<" ";
        total--;
    }
    rowend--;
     for(int i =rowend ; i>= rowstart && total>0 ;i--)
    {
        cout<<arr[i][colstart]<<" ";
        total--;
    }
    colstart++;
    }
    cout<<"\n";
    }
}
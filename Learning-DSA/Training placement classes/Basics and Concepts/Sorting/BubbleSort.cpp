// bubble sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // int flag = 0;
    // for(int i=0; i<n; i++){
        
    //     for(int j=1; j<n-i; j++){
    //         if(v[j-1]>v[j]){
    //             swap(v[j-1], v[j]);
    //             flag = 1;
    //         }
    //     }
    //     if(flag==0) break;
    //     else flag = 0;
    
    // }

    
    for(int i=0;i<n-1;i++){
        int swaps=0;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swaps++;
            }
        }
        if(swaps==0) break;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

/*

time complexity- O(n^2)
space complexity- O(1)
best case tc- O(n)

*/ 

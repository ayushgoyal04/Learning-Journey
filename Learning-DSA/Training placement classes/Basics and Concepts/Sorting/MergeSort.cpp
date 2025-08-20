// merging two sorted array

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m;
    cin >> n;
    int a1[n];
    for(int i = 0; i < n; i++)cin >> a1[i];

    cin >> m;
    int a2[m];
    for(int i = 0; i < m; i++)cin >> a2[i];

    int i = 0, j = 0, k = 0;
    int arr[n + m];

    while(i < n && j < m) {
        if(a1[i] < a2[j])arr[k++] = a1[i++];
        else arr[k++] = a2[j++];
    }

    while(i < n) arr[k++] = a1[i++];
    while(j < m) arr[k++] = a2[j++];

    for(int i = 0; i < n + m; i++)
        cout << arr[i] << " ";
        
    return 0;
}

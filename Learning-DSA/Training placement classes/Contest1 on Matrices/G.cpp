#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while(t--) {
        int n, count = 0;
        cin >> n;
        int ans[2*n-1];
        int arr[n][n] = {0};
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        
        for(int i = n - 1; i >= 0; i--) {
            int row = i;
            int column = 0;
            int sum = 0;
            while(row < n && column < n) {
                sum += arr[row][column];
                row++;
                column++;
            }
            ans[count] = sum;
            count++;
        }
        
        for(int i = 1; i < n; i++) {
            int row = 0;
            int column = i;
            int sum = 0;
            while(row < n && column < n) {
                sum += arr[row][column];
                row++;
                column++;
            }
            ans[count] = sum;
            count++;
        }
        
        reverse(ans, ans + (2 * n - 1));
        
        for(int i = 0; i < 2 * n - 1; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
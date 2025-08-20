#include <bits/stdc++.h>
using namespace std;

void QueenBoard(vector<bool>& arr, int qpsf, int totalqueen, string ans) {// qpsf = queen placed so far
    if (qpsf == totalqueen) {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (!arr[i]) {
            arr[i] = true;
             
            QueenBoard(arr, qpsf + 1, totalqueen, ans + "q" + to_string(qpsf) + "b" + to_string(i) + " ");
            arr[i] = false; // Backtrack
        }
    }
}

void QueenBoardNoRepeatition(vector<bool>& arr, int qpsf, int totalqueen, string ans, int last) {// qpsf = queen placed so far
    if (qpsf == totalqueen) {
        cout << ans << endl;
        return;
    }

    for (int i = last; i < arr.size(); i++) {
        if (!arr[i]) {
            arr[i] = true;
             
            QueenBoardNoRepeatition(arr, qpsf + 1, totalqueen, ans + "q" + to_string(qpsf) + "b" + to_string(i) + " ", i+1);
            arr[i] = false; // Backtrack
        }
    }
}

int main() {
    vector<bool> arr(4, false); 
    int queens = 2;
    //QueenBoard(arr, 0, queens, "");

    // Permutation is removed
    QueenBoardNoRepeatition(arr, 0, queens, "", 0);
}

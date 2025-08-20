#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    int roots[n];
    for(int i=0; i<n; i++){
        cin >> roots[i];
    }
    sort(roots, roots+n);
    for(int i=0; i<q; i++){
        int input;
        cin >> input;
        int upper1 = upper_bound(roots, roots+n, input) - roots;
        if(roots[upper1-1]==input){
            cout << 0 << endl;
        }
        else if((n-upper1)%2==1){
            cout << "NEGATIVE" << endl;
        }
        else{
            cout << "POSITIVE" << endl;
        }
    }
}

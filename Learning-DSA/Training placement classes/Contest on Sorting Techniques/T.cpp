// #include <bits/stdc++.h>
// using namespace std;

// struct Point {
//     long long int x, y;
// };

// int crossProduct(Point p1, Point p2, Point p3) {
//     long long int v1x = p2.x - p1.x;
//     long long int v1y = p2.y - p1.y;
//     long long int v2x = p3.x - p1.x;
//     long long int v2y = p3.y - p1.y;

//     return v1x * v2y - v1y * v2x;
// }

// string findPosition(Point p1, Point p2, Point p3) {
//     int crossProductValue = crossProduct(p1, p2, p3);

//     if (crossProductValue > 0) {
//         return "LEFT";
//     } else if (crossProductValue < 0) {
//         return "RIGHT";
//     } else {
//         return "TOUCH";
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         Point p1, p2, p3;

//         cin >> p1.x >> p1.y;
//         cin >> p2.x >> p2.y;
//         cin >> p3.x >> p3.y;

//         string position = findPosition(p1, p2, p3);
//         cout << position << endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        //cross product
        int cp = (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
        if (cp < 0) cout<<"RIGHT"<<endl;
        if (cp > 0) cout<<"LEFT"<<endl;
        if (cp == 0) cout<<"TOUCH"<<endl;        
    }
}
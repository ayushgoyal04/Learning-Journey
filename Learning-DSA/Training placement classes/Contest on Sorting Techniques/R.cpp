#include<bits/stdc++.h>
using namespace std;

bool compare(pair<string, string> a, pair<string, string> b) {
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
    
}


int main(){
    int n;
    cin>>n;
    vector<pair<string, string>> points;
    string first,last;
    while(n--){
        cin>>first>>last;
        // first = tolower(first[0]);
        // last = tolower(last[0]);
        points.push_back(make_pair(first, last));
}
        sort(points.begin(), points.end(), compare);

    // Output sorted points
    for (const auto& point : points) {
        cout << point.first << " " << point.second << endl;
    }

    return 0;

    

}
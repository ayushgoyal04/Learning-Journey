// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int applicants, apartments, maxdiff;
//     cin>>applicants>>apartments>>maxdiff;
//     vector<int> desSize(applicants);
//     for(int i=0;i<applicants;i++){
//         cin>>desSize[i];
//     }
//     vector<int> apartmentSize(apartments);
//     for(int i=0;i<apartments;i++){
//         cin>>apartmentSize[i];
//     }
//     int count=0;
//     sort(desSize.begin(),desSize.end(),greater<int>());
//     sort(apartmentSize.begin(),apartmentSize.end(),greater<int>());
//     for(int i=0; i<applicants; i++){
//         int temp = desSize[i];
//         for(int j=0;j<apartments;j++){
//             if((apartmentSize[j]-maxdiff)<=temp&&temp<=(apartmentSize[j]+maxdiff)){
//                 count++;
//                 apartmentSize[j]==INT_MIN;
//             }
//         }
//     }    
//     cout<<count-1<<endl;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int applicants, apartments, maxdiff;
    cin >> applicants >> apartments >> maxdiff;

    vector<int> desSize(applicants);
    for (int i = 0; i < applicants; i++) {
        cin >> desSize[i];
    }

    vector<int> apartmentSize(apartments);
    for (int i = 0; i < apartments; i++) {
        cin >> apartmentSize[i];
    }

    sort(desSize.begin(), desSize.end());
    sort(apartmentSize.begin(), apartmentSize.end());

    int count = 0;
    int i = 0, j = 0;
    while (i < applicants && j < apartments) {
        if (abs(desSize[i] - apartmentSize[j]) <= maxdiff) {
            count++;
            i++;
            j++;
        } else if (desSize[i] < apartmentSize[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout << count << endl;

    return 0;
}

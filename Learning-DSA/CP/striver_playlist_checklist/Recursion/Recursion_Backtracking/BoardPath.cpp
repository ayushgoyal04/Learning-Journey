#include<bits/stdc++.h>
using namespace std;

void BoardPath(int target, string ans, int cs, int &count){ // cs = surrent sum
    if(cs == target){
        cout<<ans<<endl;
        count++;
        return;
    }
    if(cs>target){
        return;
    }

    BoardPath(target, ans+"1", cs+1, count);
    BoardPath(target, ans+"2", cs+2, count);
    BoardPath(target, ans+"3", cs+3, count);


}


void BoardPathCon(int target, string ans, int cs, int &count){ // cs = surrent sum
    if(cs == target){
        cout<<ans<<endl;
        count++;
        return;
    }
    if(cs>target){
        return;
    }

    for(int i=1;i<=3;i++){
        BoardPathCon(target, ans + to_string(i), cs + i, count);

    }

}

int main(){
    int count = 0;
    BoardPath(4, "", 0, count);
 //   BoardPathCon(4, "", 0, count);
    cout<<"count is "<<count<<endl;
}
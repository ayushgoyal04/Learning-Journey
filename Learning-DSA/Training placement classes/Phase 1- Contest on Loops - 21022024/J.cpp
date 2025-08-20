#include<iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;
    for(int i=0;i<b;i++)
    {
        if(i==0 || i==b-1){ 
        for(int j=0;j<a;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        else{
            for(int j=0;j<a;j++){
            if(j==0||j==a-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    

    }

    
} // namespace std;

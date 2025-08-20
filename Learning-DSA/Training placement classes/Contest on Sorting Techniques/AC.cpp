     
              
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
// #define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int main()
{
  
  ll t;
  cin>>t;
  while(t--){
    ll n;
  cin>>n;
  ll k;
  cin>>k;
  
  mvi v(n);
  for(ll i = 0 ; i<n ; i++){
    cin>>v[i];
  }
  
  sort(v.begin(),v.end());
  ll flag = 0;
  
  for(ll i = 0 ; i<n ; i++){
    int m = v[i]-k;
    
    if (binary_search(v.begin(), v.end(), m)){
      flag = 1;
    }
  }
  
  if(flag==1) cout<<"true"<<endl;
  else cout<<"false"<<endl;
  
  }
 
}
// ksudyg
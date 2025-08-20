#include<bits/stdc++.h>
using namespace std;

int findgcd(int a, int b){
	if(a==0) return b;
	if(b==0) return a;
	if(a==b) return a;
	if(a>b) return findgcd(a-b, b);
	return findgcd(a, b-a);


	//findgcd()
}
int main() {
	int n1,n2;
	cin>>n1>>n2;
	int ans = findgcd(n1,n2);
	cout<<ans<<endl;
	return 0;
}
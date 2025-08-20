#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i = n/2;

	while(i>1){
		if(n%i==0) {
			cout<<"Not Prime"<<endl;
			return 0;
		}
		i--;
	}
	cout<<"Prime"<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {

	int n1,n2,n=1;
	cin>>n1>>n2;
	long long int seq = 0;
	while(n1){
		seq = 3*n+2;
		if(seq%n2!=0){
			n1--;
			n++;
			cout<<seq<<endl;
		}
		else n++;

	}
	return 0;
}
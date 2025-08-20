#include<bits/stdc++.h>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	// int i;
	// if(n1>n2) i = n1;
	// else i = n2;
	int temp = n2;
	while(temp%n1!=0 || temp%n2!=0){
		temp++;
	}
	cout<<temp<<endl;
	return 0;
}
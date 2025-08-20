#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int deci = 0, i = 0;
	while(n>0){
		deci += (n%10) * pow(2,i); 
		i++;
		n/=10;
	}cout<<deci<<endl;
	return 0;
}
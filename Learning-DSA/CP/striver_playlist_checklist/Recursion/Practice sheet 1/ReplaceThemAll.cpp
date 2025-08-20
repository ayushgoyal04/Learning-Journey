#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int l = s.length();
	for(int i=0;i<l;i++){
		if(s[i]=='0'){
			s[i] = '5';
		}
	}
	cout<<s<<endl;
	
	return 0;
}
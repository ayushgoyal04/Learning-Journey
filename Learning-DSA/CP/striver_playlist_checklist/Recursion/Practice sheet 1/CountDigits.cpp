#include<bits/stdc++.h>

using namespace std;

int main() {

	string s;
	cin>>s;
	
	char digit;
	cin>>digit;
	
	int len = s.length();
int count = 0;
	for(int i=0;i<len;i++){
		if(s[i]==digit)
		count++;
	}
	cout<<count<<endl;
	return 0;
}
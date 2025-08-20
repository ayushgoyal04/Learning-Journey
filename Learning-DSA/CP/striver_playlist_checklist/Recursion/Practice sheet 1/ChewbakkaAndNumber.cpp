#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int len = s.length();

	// for(int i=0;i<len;i++){
	// 	if(s[0]=='9'){

	// 	}
	// 	else if(s[i]>'4'){
	// 		s[i] = '9' - s[i] + '0';

	// 	}
	// }

	for(int i=0;i<len;i++){
		if(s[0]=='9' && i==0){
			continue;
		}
		else if(s[i]>'4'){
		s[i] = '9' - s[i] + '0';
		}
	}
	cout<<s<<endl;
	
	return 0;
}
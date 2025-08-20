#include<bits/stdc++.h>
using namespace std;
int main() {
	int n1, n2;
	cin>>n1>>n2;
	//  int temp = n1;
	while(n1<=n2){
		string s = to_string(n1);
		int l = s.length();
		int temp = n1;
		int check = 0;
		while(temp>0){
			check += pow((temp%10) , l);
			temp = temp/10;
		}
		if(check == n1) {
			cout<<n1<<endl;
			n1++;
		}else{
			n1++;
		}

	}
	return 0;
}
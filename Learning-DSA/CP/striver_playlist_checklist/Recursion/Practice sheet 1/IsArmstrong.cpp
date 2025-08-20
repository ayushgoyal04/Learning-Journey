#include<bits/stdc++.h>
using namespace std;

bool IsArm(int n){
	string s = to_string(n);
	int l = s.length();
	int temp = n, a = 0;
	while(n>0){
		a += pow(n%10,l);
		n /= 10;
	}
	if(a == temp) return true;
	else return false;

}

int main() {
	int n;
	cin>>n;
	if(IsArm(n)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
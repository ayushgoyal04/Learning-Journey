#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int num;
	while(cin>>num){
		v.push_back(num);
	}
	int sum = 0;
	for(int i: v){
		sum = sum+i;
		if(sum>=0){
			cout<<i<<endl;
		}
		else{
			return 0;
		}

	}
	
	return 0;
}
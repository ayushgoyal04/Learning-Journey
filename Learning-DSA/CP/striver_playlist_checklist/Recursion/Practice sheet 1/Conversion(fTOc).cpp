#include<bits/stdc++.h>
using namespace std;

int main() {
	int min, max, step;
	cin>>min>>max>>step;
	while(min<=max){
		int cel =0;
		cel =  (5/9) * (min-32);
		cout<<min<<" "<<cel<<endl;
		min += step;
	}
	return 0;
}
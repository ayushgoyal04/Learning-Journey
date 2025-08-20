#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int temp = n;
	int temp1 = n;
	int temp2 = n/10;
	int count  = 0;
	if(n==0) count = 0;
	else{
		while(temp>0){
			temp = temp/10;
			count++;
		}
	}
	if(count == 0) 
	{
		cout<<0<<endl;
		return 0;
	}
	int oddsum = 0;
	int evensum = 0;
	while(temp1>0){
		oddsum+=temp1%10;
		temp1 = temp1/100;

	}
	while(temp2>0){
		evensum+=temp2%10;
		temp2 = temp2/100;
        	}


cout<<oddsum<<endl<<evensum<<endl;
	return 0;
}
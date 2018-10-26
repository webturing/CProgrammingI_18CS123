#include<bits/stdc++.h>
using namespace std;
int main() {
	int cnt=0;
	for(int a=1; a<=4; a++)
		for(int b=1; b<=4; b++){
	if(a==b)continue;
			for(int c=1; c<=4; c++) {
				
				if(b==c)continue;
				if(c==a)continue;
				cout<<a<<b<<c<<endl;
				++cnt;
			}	}
	cout<<cnt<<endl;
	return 0;
}

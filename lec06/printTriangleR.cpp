#include<bits/stdc++.h>
using namespace std;
int main() {
	int b=4;
	///for(int x=b-1; x>=0; x--) //ok
	for(int x=0; x<b; x++) {
		for(int y=0; y<b-x; y++) {
			cout<<'*';
		}
		cout<<endl;
	}

	return 0;
}

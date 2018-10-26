#include<bits/stdc++.h>
using namespace std;
int main() {
	int cnt=0;
	int i=101;
	while(i<=200) {
		int flag=0;
		int j=2;
		while(j<=i-1) {	//judge i is primer or not ?
			if(i%j==0) {
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0) {	//if i is a primer let cnt++ and print i
			cout<<i<<" ";
			cnt++;
		}
		i++;
	}
	cout<<endl<<cnt<<endl;

	return 0;
}

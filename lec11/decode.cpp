#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[100]="L ORYH BRX";
	for(int k=1; k<26; k++) {
	cout<<"K="<<k<<":";
		for(int i=0; i<strlen(a); i++) {
			if(a[i]<'A'||a[i]>'Z') {
				cout<<a[i];
				continue;
			}
			int p=a[i]-'A';
			int q=(p+k)%26;
			cout<<char('A'+q);
		}
		cout<<endl;
	}
	return 0;
}

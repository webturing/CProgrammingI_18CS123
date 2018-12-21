#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int T;cin>>T;
	while(T--){
		cin>>n;
		double p=n*log10(n);
		p=fmod(p,1.0);
		cout<<floor(pow(10,p))<<endl;
	}
	return 0;
}

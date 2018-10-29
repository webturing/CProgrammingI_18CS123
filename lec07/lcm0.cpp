#include<bits/stdc++.h>
using namespace std;
int main() {
	cout<<235%17<<endl;
	int a,b;
	cin>>a>>b;
	for(int c=1;c<=a*b;c++){
		if(c%a==0&&c%b==0){
			cout<<c<<endl;
			break;
		}
	}
	return 0;
}

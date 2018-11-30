#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main() {	
	int a=6,b=8;
	cout<<gcd(a,b)<<endl;
	return 0;
}

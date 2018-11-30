#include<bits/stdc++.h>
using namespace std;
//gcd(6,0)=6 
//gcd(36,6)=
int gcd(int a,int b){return b?gcd(b,a%b):a;}//sublime
int main() {	
	int a=8,b=6;
	cout<<gcd(a,b)<<endl;
	//gcd(8,6)=gcd(6,2)=gcd(2,0)=2
	//gcd(6,8)=gcd(8,6)==.==2
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int gcd2(int a,int b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int lcm(int a,int b){
	return a/gcd(a,b)*b;
}
int main(){
	cout<<gcd(6,8)<<endl;
	return 0;
}

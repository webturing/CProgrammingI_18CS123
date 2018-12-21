#include<bits/stdc++.h>
using namespace std;
int rev(int n){
	int m=0;
	while(n>0){
		m=m*10+n%10;
		n/=10;
	}
	return m;
}
bool prime(int n){
	if(n==2)return true;
	if(n%2==0||n<2)return false;
	for(int i=3;n/i>=i;i+=2){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	assert(rev(123)==321);
	assert(rev(1000)==1);
	assert(prime(2)==1);
	assert(prime(9)==0);
	int n;
	while(cin>>n){
		if(prime(rev(n)))
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
 } 

#include<bits/stdc++.h>
using namespace std;
int len(int n){
	if(n<10)return 1;
	int k=len(n/10);
	return k+1;
}
//len(1234)=len(123)+1=len(12)+1+1=len(1)+1+1+1=1+1+1+1=4 
int main() {	
	cout<<len(1234);
	return 0;
}

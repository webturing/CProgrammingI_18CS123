#include<bits/stdc++.h>
using namespace std;
void foo(int p,int a[]){
	while(p>0){
		a[p%10]++;
		p/=10;
	}
}
int main() {
	int n=20;
	int a[10]= {0}; //
	for(int p=1; p<=n; p++) {
		foo(p,a);
	}
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

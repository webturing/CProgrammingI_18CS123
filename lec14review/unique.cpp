#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int a[]={1,3,2,2,4,5,8,9,9,8};
	int n=sizeof(a)/sizeof(a[0]);
	print(a,n);
	sort(a,a+n);
	print(a,n);
	int m=unique(a,a+n)-a;
	print(a,m);
	return 0;
}

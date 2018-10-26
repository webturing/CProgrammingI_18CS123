#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	for(int i=0;i<n;i++){
		//print n-i-1 spaces
		for(int j=0;j<n-i-1;j++)cout<<" ";
		//print 2*i+1 stars
		for(int j=0;j<2*i+1;j++)cout<<"*";
		//print endl
		cout<<endl;		
	}
	for(int i=n-2;i>=0;i--){
		//print n-i-1 spaces
		for(int j=0;j<n-i-1;j++)cout<<" ";
		//print 2*i+1 stars
		for(int j=0;j<2*i+1;j++)cout<<"*";
		//print endl
		cout<<endl;		
	}
	return 0;
}

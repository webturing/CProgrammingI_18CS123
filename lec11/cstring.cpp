#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[100];
	char b[100]="dbc";
	char c[100]={'a','b','c'};
	cout<<a<<endl;
	cout<<b<<endl;//abc
	cout<<c<<endl;
	b[1]++;
	cout<<b<<endl;//acc
	b[0]=b[0]-'a'+'A';
	cout<<b<<endl;//Acc
	cin>>a;
	cout<<a<<endl;
	for(int i=0;i<strlen(a);i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

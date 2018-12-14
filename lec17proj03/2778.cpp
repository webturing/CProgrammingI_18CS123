#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100]="00";
	cin>>(s+2);
	int k=strlen(s);
	int w=k/3;
	int a,b,c;
	sscanf(s+(k-w),"%d",&c);
	s[k-w]=0;
	sscanf(s+(k-2*w),"%d",&b);
	s[k-2*w]=0;
	sscanf(s,"%d",&a);
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}

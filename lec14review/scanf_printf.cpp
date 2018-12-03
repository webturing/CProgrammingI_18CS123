#include<bits/stdc++.h>
using namespace std;

int main() {
	int a=123456;
	char s[100];
	sprintf(s,"%d%d",a%10,a/10);
	int b;
	sscanf(s,"%d",&b);
	printf("%d\n",b);
	return 0;
}

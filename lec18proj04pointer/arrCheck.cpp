#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[10];//长度为10 名（起始地址）是a的数组
	for(int *p=a; p<a+10; p++)
		scanf("%d",p);			
		int *p=a,*q=a+9;
		while(p<q) {			
			int t=*p;
			*p=*q;
			*q=t;
			++p,--q;
		}	

	for(int *p=a; p<a+10; p++)
		printf("%d ",*p);
	printf("\n");
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int a[10];//长度为10 名（起始地址）是a的数组
	a[0]=5;a[9]++;//a[10]
	int b;//长度为1 名为(&b)的数组
	b=4;
	&b[0]=4;
	int *p;//长度为0 名为p的数组 
	p[0];//越界
	p=a;
	 
	return 0;
}

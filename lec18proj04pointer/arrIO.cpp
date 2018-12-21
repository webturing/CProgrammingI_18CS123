#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[10];//长度为10 名（起始地址）是a的数组
//	for(int i=0; i<10; i++)
//		scanf("%d",&a[i]);

	int *p=a;
	*p=1;
	p++;
	for(p=a; p<a+10; p++) {
		cin>>*p;
	}

	for(int i=0; i<10; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(p=a; p<a+10; p++) {
		cout<<*p<<" ";
	}
	cout<<endl;
	for(p=a+9;p>=a;p--){
		
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
	int x=1023;
	char *p=(char*)(&x);
	cout<<(int)(*p)<<endl;
	p++;
	cout<<(int)(*p)<<endl;
	p++;
	cout<<(int)(*p)<<endl;
	p++;
	cout<<(int)(*p)<<endl;
	void *q; //通用指针的定义 （只记录地址值） 
	q=&x;//任何类型指针都可以直接转为通用指针 
	//q++;q--;*q;//对于都是非法操作 
	cout<<*(int*)q<<endl;//通用指针使用前需要转化为特定类型 
	
	return 0;
}

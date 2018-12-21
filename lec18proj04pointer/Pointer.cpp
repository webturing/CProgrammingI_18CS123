#include<bits/stdc++.h>
using namespace std;
int main(){	
	int a=4;
	a++;
	int* p;//未初始化的指针
	//cout<<*p<<endl;//RE
	p=&a; //p关联a  p存储了a的地址
	cout<<*p<<endl;//OK
	cout<<p[0]<<endl;//all right
	++*p;
	cout<<a<<endl;
	cout<<"p="<<p<<endl;
	p++;//指针右移一个单位（sizeof(int))
	cout<<"p="<<p<<endl;
	cout<<*p<<endl;//RE
	cout<<p[0]<<endl;//RE
	cout<<*(p-1)<<endl;//OK 
	cout<<p[-1]<<endl;//OK
		
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<sizeof(bool)<<endl;//1
	cout<<sizeof(long long)<<endl;//8
	cout<<sizeof(double)<<endl;//8
	int a[10];
	cout<<sizeof(a)<<endl;//40
	cout<<sizeof('0')<<endl;//1 char ������literal 
	cout<<sizeof('\\')<<endl;//1
	cout<<'\\'<<endl;
	cout<<sizeof(0)<<endl;//4 0  int ������ 
	cout<<sizeof(0LL)<<endl;//8
	cout<<sizeof(0.0)<<endl;//8 double������ 
	cout<<sizeof(0.0f)<<endl;//4 float������ 
	return 0;
}

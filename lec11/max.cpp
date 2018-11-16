#include<iostream>
using namespace std;

int Max(int a,int b){
	if(a>b)return a;
	else return b;
}
int Max4(int a,int b,int c,int d){
	int ret=Max(a,b);//res(ult)  ret(urn) ans(wer)
	ret=Max(ret,c);
	ret=Max(ret,d);
	return ret;	
}
int main() {
	cout<<Max4(3,4,5,6)<<endl;
	return 0;
}

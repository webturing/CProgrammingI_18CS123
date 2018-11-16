#include<iostream>
#include<string>
using namespace std;
///操作类 没有返回值 
void hello(){
	cout<<"hello world"<<endl;
}
void hello(string s){
	cout<<"hello "<<s<<endl;
}
int main() {
	hello();
	hello("zj"); 
	hello("xm"); 
	return 0;
}

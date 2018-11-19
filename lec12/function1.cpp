#include<iostream>
using namespace std;
int add(int a,int b) {
	a++;
	return a+b;
}
int main() {
	int a=4,b=4;
	add(a,b);
	cout<<a<<endl;
	return 0;
}

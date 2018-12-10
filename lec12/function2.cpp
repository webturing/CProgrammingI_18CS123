#include<iostream>
#include<cmath>
using namespace std;
void grow(int &a){// pass by reference
	a++;
}
void Swap(int &a,int &b){
	int t=a;a=b;b=t;
}
int main()
{
	int a=3;
	grow(a);
	cout<<a<<endl;
	
	return 0;
}

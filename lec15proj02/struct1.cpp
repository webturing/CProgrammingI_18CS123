#include<bits/stdc++.h>
using namespace std;
struct Person{
	char name[100];
	int age;
};
int main(){
	Person p;
	cin>>p.name>>p.age;//结构体变量.分量 
	cout<<p.name<<" "<<p.age<<endl;
	return 0;	
}

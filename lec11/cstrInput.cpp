#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[1000];
	//cin>>s;//格式化读取，不包含首尾的空格
	//gets(s);//deprecated
	fgets(s,20,stdin); //替代了gets函数 行读取  
	cout<<s<<endl;	
	return 0;
}

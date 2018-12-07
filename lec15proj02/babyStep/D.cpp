#include<bits/stdc++.h>
using namespace std;
bool ok(char*s){
	if(strlen(s)<=1||strlen(s)%2!=0)
		return false;
	char t[1000];
	strcpy(t,s);
	reverse(t,t+strlen(t));
	return strcmp(s,t)==0;
}
int main() {
	int N;
	cin>>N;
	while(N--) {
		char s[1000];
		cin>>s;
		while(ok(s)){
			s[strlen(s)/2]=0;
		}
		cout<<strlen(s)<<endl;
	}
	return 0;
}

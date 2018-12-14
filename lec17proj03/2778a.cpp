#include<bits/stdc++.h>
using namespace std;

//123456=>12 34 56
//1234=>001234 00  12 34
//1=>001 =>
int main() {
	char s[100];
	cin>>s;
	char t[100]="00000";
	int k=strlen(s);
	if(k%3==1){
		strcpy(t,"00");
		strcat(t,s);		
	}else if(k%3==2){
		strcpy(t,"0");
		strcat(t,s);
	}else{
		strcpy(t,s);
	}
	k=strlen(t);
	int w=k/3;
	int a,b,c;
	sscanf(t+2*w,"%d",&c);
	cout<<t<<endl;
	t[2*w]=0;
	sscanf(t+w,"%d",&b);
	t[w]=0;
	sscanf(t,"%d",&a);
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}

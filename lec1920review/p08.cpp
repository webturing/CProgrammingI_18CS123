#include<bits/stdc++.h>
using namespace std;
#define F(a) for(a=0;a<=1;a++)
int main() {
	int a,b,c,d,e;
	F(a)F(b)F(c)F(d)F(e){
		if(a+c==2)continue;
		if(b+c==0)continue;
		if(c==1&&(d+e)!=1)continue;
		if(b+c+d==3)continue;
		if(b==1&&(d+e)==2)continue;
		if(a+b+c+d+e!=3)continue;
		printf("%d %d %d %d %d\n",a,b,c,d,e);
	}
	return 0;
}

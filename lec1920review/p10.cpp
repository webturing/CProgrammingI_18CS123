#include<bits/stdc++.h>
using namespace std;

int main() {
	for(int a=1; a<=3; a++)
		for(int b=1; b<=3; b++) {
			if(a==b)continue;
			int c=6-a-b;
			int ap=(b==2)&&(c==2),aq=(a==1);
			int bp=(b<=2),bq=(c==3);
			int cp=(a!=2),cq=(b!=1);
			if(a+ap+aq==3&&b+bp+bq==3&&c+cp+cq==3)
				printf("%d %d %d\n",a,b,c);
		}
	return 0;
}

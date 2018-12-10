#include<bits/stdc++.h>
using namespace std;
#include "factor.h"
int main(){
	Factor s={0,1};
	for(int i=1;i<=20;i++){
		Factor f={1,i};
		if(i%2==0){
			sub(s,f,s);
		}else{
			add(s,f,s);
		}
	}
	Output(s);
	return 0;
}


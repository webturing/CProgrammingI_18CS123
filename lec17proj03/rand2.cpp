#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int doss(int left,int right){
	return rand()%(right-left+1)+left;
}

int main(){
	srand(time(0));
	cout<<doss(0,1)<<endl;//coin
	cout<<doss(1,6)<<endl;//doss
	while(1){
		int cur=doss(1,100);
		cout<<cur<<" ";
		if(cur==50)
			break;
	}
	return 0;
}

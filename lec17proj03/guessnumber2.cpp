#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int k=rand()%100;
	int left=0,right=99;	
	while(1){ //¶þ·Ö´ð°¸ 
		int user=(left+right)/2;
		cout<<"Computer guess the answer is "<<user<<endl;
		if(user==k){
			cout<<"Congratulations!"<<endl;
			break;
		}else if(user>k){
			right=user-1;
			cout<<"Too bigger"<<endl;
		}else{
			left=user+1;
			cout<<"Too smaller"<<endl;
		}
	}
	
	return 0;
}

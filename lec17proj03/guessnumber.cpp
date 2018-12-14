#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int k=rand()%100;
	while(1){
		int user;
		cin>>user;
		if(user==k){
			cout<<"Congratulations!"<<endl;
			break;
		}else if(user>k){
			cout<<"Too bigger"<<endl;
		}else{
			cout<<"Too smaller"<<endl;
		}
	}
	
	return 0;
}

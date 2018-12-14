#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

inline double random(){
	return 1.0*rand()/RAND_MAX;
}

int main(){
	int N=100000000;
	int M=0;
	for(int i=0;i<N;i++){
		double x=random();
		double y=random();
		if(x*x+y*y<=1)++M;//hypot(x,y)	
	}
	double pi=4.0*M/N;
	cout<<pi<<endl;
	return 0;
}

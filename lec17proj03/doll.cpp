#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

double random(){
	return 1.0*rand()/RAND_MAX;
}

int main(){
	srand(time(0));
	int a[10];
//	memset(a,0,sizeof(a));//C 
	fill(a,a+10,0);//C++
	for(int i=0;i<100000;i++)
	{
		double x=random();
		a[(int)(x*10)]++;
	}
	for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	double y=random();
	if(y<0.05){
		cout<<"First Prize: Macbook Pro"<<endl;
	}else if(y<0.05+0.15){
		cout<<"Second Prize: Iphone X"<<endl;	
	}else if(y<0.05+0.15+0.3){
		cout<<"3rd Prize: Mi3 phone"<<endl;
	}else{
		cout<<"Sorry "<<endl;
	}
	
	
	
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
void Input(int a[],int n){
	for(int i=0;i<n;i++)cin>>a[i];
}
void Output(int *a,int n){
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
void Sort(int a[],int n){
	for(int i=0;i<n-1;i++){//有序区的长度 
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[k])k=j;
		}
		if(k!=i){
			int t=a[k];a[k]=a[i];a[i]=t;
		}
		Output(a,n);
	}
		
}
int main(){
	int a[10]={0};
	Input(a,10);
	Sort(a,10);
	Output(a,10);
	return 0;
}

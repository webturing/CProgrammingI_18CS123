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
		for(int j=0;j<=n-i-2;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
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

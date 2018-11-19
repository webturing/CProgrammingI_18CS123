#include<iostream>
#include<algorithm>
using namespace std;
void input(int *a,int n=10){
	for(int i=0;i<n;i++)cin>>a[i];
}
void output(int a[],int n=10){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Sort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=n-i-2;j++){
			if(a[j]>a[j+1]){
				int t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		
		}	output(a,n);
	}
}
int main() {
	int a[10];
	input(a,10);
	Sort(a,10);
	output(a,10);


	return 0;
}

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
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[k])k=j;
		}
		if(k!=i){
			int t=a[i];a[i]=a[k];a[k]=t;
		}
		output(a,n);
	}
}
int main() {
	int a[10];
	input(a,10);
	Sort(a,10);
	output(a,10);


	return 0;
}

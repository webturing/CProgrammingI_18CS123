#include<bits/stdc++.h>
using namespace std;
void print(int *a,int n) {
	for(int i=0; i<n; i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main() {
	int a[]= {1,3,5,7,9,2,4,6,8,0};
	int n=sizeof(a)/sizeof(a[0]);
//	sort(a,a+n);//�ǽ��� 
//	sort(a,a+n,less<int>()); //�ǽ��� 
    sort(a,a+n,greater<int>());//������ 
	print(a,n);
	return 0;
}

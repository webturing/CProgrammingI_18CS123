#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	int s=1;
	for(int i=2;i<=n;i++)s*=i;
	return s;
} 
int binormal(int n,int r ){
	return factorial(n)/factorial(r)/factorial(n-r);	
} 
void yhTriangle(int n){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<binormal(i,j)<<" ";
		}
		cout<<endl;
	}
}
int main() {
	assert(factorial(5)==120);
	assert(binormal(6,1)==6);
	yhTriangle(5); 
	return 0;
}

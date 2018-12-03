#include<bits/stdc++.h>
using namespace std;
const int N=100;
bool prime[N];
void Init() {//nloglogn+ O(1)
	fill(prime,prime+N,true);//0 add 1~n  Into filter
	prime[0]=prime[1]=false;//1 remove 0 and 1
	for(int i=2;i*i<=N;i++)
	if(prime[i]){
		for(int j=i*i;j<N;j+=i)
			prime[j]=false;
	}
}
int main() {
	Init();
	for(int i=0; i<N; i++)
		if(prime[i])
			cout<<i<<" ";
	cout<<endl;
	return 0;
}

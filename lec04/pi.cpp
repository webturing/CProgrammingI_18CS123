#include<bits/stdc++.h>
using namespace std;
int main() {
	double s=0;
	int i=1;
	while(i<=100000){
		s+=1.0/i/i;
		i++;	
	}
	cout<<sqrt(6*s)<<endl;
	return 0;
}

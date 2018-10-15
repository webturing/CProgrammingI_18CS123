#include<bits/stdc++.h>
using namespace std;
int main() {
	double a,b,c;
	cin>>a>>b>>c;
	if(a<=0||b<=0||c<0||a+b<=c||b+c<=a||c+a<=b) {
		cout<<"Something wrong~"<<endl;
	} else {
		double s=(a+b+c)/2;
		double area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<fixed<<setprecision(3)<<area<<endl;
	}

	return 0;
}

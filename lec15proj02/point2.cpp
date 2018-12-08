#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;
};
void Print(Point &a) {
	cout<<a.x<<" "<<a.y<<endl;
}

void Input(Point &a) {
	cin>>a.x>>a.y;
}

double Distance(Point &a, Point &b) {
	double dx=a.x-b.x;
	double dy=a.y-b.y;
	return sqrt(dx*dx+dy*dy);
}
double  Area(Point &p,Point&q,Point&r){
	double a=Distance(p,q);
	double b=Distance(p,r);
	double c=Distance(q,r);
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main() {
	Point a= {3,4},b;
	Input(a);
	Input(b);
	cout<<Distance(a,b)<<endl;
	Point c;
	Input(c);
	cout<<Area(a,b,c)<<endl;//
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;
};
Point me = {0, 0};
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
bool cmpX(Point&a,Point&b){//<
	return a.x < b.x;//按照x的升序
}
bool cmpD(Point&a,Point&b){//<
	double d1=Distance(a,me);
	double d2=Distance(b,me);
	if(d1!=d2) return d1<d2;
	return a.x<b.x;
}
int main() {
	Point p[10];
	for(int i=0;i<10;i++){
		p[i].x=rand()%100;
		p[i].y=rand()%100;
	}
	sort(p,p+10,cmpD);
	for(int i=0;i<10;i++){
		cout<<Distance(p[i],me)<<" ";
		Print(p[i]);
	}
	return 0;
}

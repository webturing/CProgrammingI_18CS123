#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;
};
void Print(Point &a) {
	cout<<a.x<<" "<<a.y<<endl;
}
void Input(Point& a) { 
	cin>>a.x>>a.y;
}
double Distance(Point &a,Point &b){	
	double dx=a.x-b.x;
	double dy=a.y-b.y;
	return sqrt(dx*dx+dy*dy);
}
bool cmpX(Point&a,Point&b){//<
	return a.x<b.x;//°´ÕÕxµÄÉýÐò 
}
int main() {
	Point p[10];
	for(int i=0;i<10;i++){
		p[i].x=rand()%100;
		p[i].y=rand()%100;
	}
	sort(p,p+10,cmpX);
	for(int i=0;i<10;i++)Print(p[i]);
	return 0;
}

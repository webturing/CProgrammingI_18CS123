#include<bits/stdc++.h>
using namespace std;
//自定义结构的输入输出
struct Point {
	int x,y;
};
void print(Point &a) {//可以传递值、传递引用更佳
	cout<<a.x<<" "<<a.y<<endl;
}
//void input(Point a){//wrong： pass by value
//	cin>>a.x>>a.y;
//}
void input(Point& a) { //必须传递引用或者指针
	cin>>a.x>>a.y;
}
int main() {
	Point a= {3,4};
	input(a);
	print(a);
	return 0;
}

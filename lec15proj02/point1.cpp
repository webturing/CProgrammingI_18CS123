#include<bits/stdc++.h>
using namespace std;
//�Զ���ṹ���������
struct Point {
	int x,y;
};
void print(Point &a) {//���Դ���ֵ���������ø���
	cout<<a.x<<" "<<a.y<<endl;
}
//void input(Point a){//wrong�� pass by value
//	cin>>a.x>>a.y;
//}
void input(Point& a) { //���봫�����û���ָ��
	cin>>a.x>>a.y;
}
int main() {
	Point a= {3,4};
	input(a);
	print(a);
	return 0;
}

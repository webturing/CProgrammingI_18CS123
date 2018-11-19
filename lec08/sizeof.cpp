#include<bits/stdc++.h>
using namespace std;

int main() {
	cout << sizeof(int) << endl;//int 1 byte�ֽ�=8 bit���أ�λ)
	cout << sizeof(long) << endl;//4 long GCC ���� deprecated
	cout << sizeof(long long) << endl;//8
	cout << sizeof(char) << endl;//1
	int x;
	long long y;
	float z;
	double t;
	cout << sizeof(x) << endl;//4 x is int
	cout << sizeof(y) << endl;//8 y is long long
	cout << sizeof(z) << endl;//4 z is float ������ .6λ
	cout << sizeof(t) << endl;//8 t is double ˫���� 12
	return 0;
}

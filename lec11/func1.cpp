#include<iostream>

using namespace std;

///有返回值 基础数值函数
int f(int a, int b) {
    return a + b;
}

int main() {
    cout << f(3, 4) << endl;
    //cout << a << endl;//CE
    return 0;
}

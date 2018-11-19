#include<iostream>
#include<string>

using namespace std;

///操作类函数：没有返回值void
void hello() {
    cout << "hello world" << endl;
}

void hello(string s) {
    cout << "hello " << s << endl;
}

int main() {
    hello();
    hello("zj");
    hello("xm");
    return 0;
}

#include<iostream>
#include<cstring>

using namespace std;

int f(int x = 6, int y = 5) {
    return x + y;
}

int f(char s[]) {
    return strlen(s);
}

int main() {
    cout << f(3, 4) << endl;//7;
    cout << f(3) << endl;
    cout << f() << endl;
    cout << f("hello") << endl;
    return 0;
}

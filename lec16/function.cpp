#include<bits/stdc++.h>

using namespace std;

int add(int a, int b) { return a + b; }

int mul(int a, int b) { return a * b; }

void foo(int a, int b, int &c, int &d) {
    c = a + b;
    d = a * b;
}

int main() {
    cout << add(3, 4) << endl;
    int c = 0, d = 0;
    foo(4, 3, c, d);
    cout << c << endl;
    cout << d << endl;
    return 0;
}

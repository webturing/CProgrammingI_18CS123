#include<bits/stdc++.h>

using namespace std;

int main() {
    int a = 3, b = 4;
    {
        int t = a;
        a = b;
        b = t;
    }

    cout << a << " " << b << endl;
    {
        int *p = &a;
        int *q = &b;
        int *t;
        t = p;
        p = q;
        q = t;
    }
    cout << a << " " << b << endl;
    {
        int *p = &a;
        int *q = &b;
        int c;
        int *t = &c;
        *t = *p;
        *p = *q;
        *q = *t;
    }
    cout << a << " " << b << endl;
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    cout << a << " " << b << endl;

    return 0;
}

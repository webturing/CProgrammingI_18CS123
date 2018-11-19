#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a > b)swap(a, b);
        if (b > c)swap(b, c);
        if (a > b)swap(a, b);
        cout << a << " " << b << " " << c << endl;
    }


    return 0;
}

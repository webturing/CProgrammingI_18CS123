#include<bits/stdc++.h>

using namespace std;

void f(int &n) {
    n++;
}

int main() {
    int n = 1234;
    f(n);
    cout << n << endl;
    return 0;
}

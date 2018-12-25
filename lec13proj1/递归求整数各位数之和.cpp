#include<bits/stdc++.h>

using namespace std;

int sum(int n) {
    if (n < 10)return n;
    int s = sum(n / 10);
    return s + n % 10;
}

int main() {
    cout << sum(1234);
    return 0;
}

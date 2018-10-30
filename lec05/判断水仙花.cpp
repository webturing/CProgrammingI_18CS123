#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 153;
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    cout << (a * a * a + b * b * b + c * c * c == n) << endl;

    return 0;
}

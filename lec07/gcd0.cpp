#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int r = a + b; r >= 1; r--) {
        if (a % r == 0 && b % r == 0) {
            cout << r << endl;
            break;
        }
    }
    return 0;
}

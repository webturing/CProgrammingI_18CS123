#include<iostream>
#include<cmath>

using namespace std;

int ok(int n) {
    int y = sqrt(n);
    if (y * y == n)
        return 1;
    else
        return 0;
}

int main() {
    for (int n = 1; n <= 100; n++) {
        if (ok(n)) {
            cout << n << endl;
        }
    }
    return 0;
}

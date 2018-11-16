#include<iostream>
#include<cmath>

using namespace std;

int main() {
    for (int n = 1; n <= 100; n++) {
        int x = sqrt(n);
        if (x * x == n) {
            cout << n << endl;
        }
    }
    return 0;
}

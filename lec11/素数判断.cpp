#include<iostream>
#include<cmath>

using namespace std;

bool prime(int n) {
    if (n == 2)return true;
    if (n <= 1 || n % 2 == 0)return false;
    for (int c = 3; c * c <= n; c += 2) {
        if (n % c == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << prime(0) << endl;
    return 0;
}

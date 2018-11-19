#include<bits/stdc++.h>

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
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (prime(i))cout << i << endl;
    return 0;
}

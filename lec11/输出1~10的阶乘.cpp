#include<iostream>
#include<cmath>

using namespace std;

int factorial(int n) {
    int ans = 1;
    for (int i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

int main() {
    for (int n = 1; n <= 10; n++) {
        cout << factorial(n) << endl;
    }
    return 0;
}

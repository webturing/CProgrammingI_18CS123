#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int prime(int n) {
    if (n == 1)return 0;
    for (int c = 2; c * c <= n; c++) {
        if (n % c == 0) {
            return 0;
        }
    }
    return 1;
}

bool check(int n) {
    for (int p = 3; p <= n / 2; p += 2) {
        if (prime(p) && prime(n - p))
            return true;
    }
    return false;
}

int main() {

    for (int n = 6; n <= 20000000; n += 2) {    //n=p+(n-p)
        if (check(n) == false) {
            cout << "Congratulations!" << endl;
        }
    }

    return 0;
}

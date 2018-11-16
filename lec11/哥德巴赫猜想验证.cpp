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

int main() {
    ofstream cout("log.txt");
    for (int n = 6; n <= 200000; n += 2) {    //n=p+(n-p)
        for (int p = 3; p <= n / 2; p += 2) {
            if (prime(p) && prime(n - p)) {
                cout << n << "=" << p << "+" << n - p << endl;
                break;
            }
        }
    }

    return 0;
}

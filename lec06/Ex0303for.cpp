#include <bits/stdc++.h>

using namespace std;

int main() {
    int cnt = 0;
    for (int n = 101; n <= 200; n++) {
        int flag = 0;  // judge n is primer or not
        for (int c = 2; c * c <= n; c++) {
            if (n % c == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cnt++;
            cout << n << " ";
        }
    }
    cout << endl << cnt << endl;
    return 0;
}

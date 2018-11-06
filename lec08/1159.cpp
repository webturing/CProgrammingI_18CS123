#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[101];
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++)cin >> a[i];
        sort(a, a + n);
        double s = 0;
        for (int i = 1; i <= n - 2; i++)s += a[i];
        double avg = s / (n - 2);
        cout << fixed << setprecision(2) << avg << endl;
    }

    return 0;
}

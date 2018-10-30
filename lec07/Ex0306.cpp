#include <bits/stdc++.h>

using namespace std;
// 1!+2!+3!+..+20!
typedef long long LL;

int main() {
    int n;
    cin >> n;
    LL s = 0;
    for (int i = 1; i <= n; i++) {
        LL p = 1LL;  /// compute i! then add it to S
        for (int j = 2; j <= i; j++) p *= j;
        s += p;
    }
    cout << s << endl;
    return 0;
}

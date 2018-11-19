#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;///counter
    int i = a;
    while (i <= b) {
        int c = i % 10;
        int b = i / 10 % 10;
        int a = i / 100;
        if (a * a * a + b * b * b + c * c * c == i)
            ++cnt;
        i++;
    }
    cout << cnt << endl;
    return 0;
}

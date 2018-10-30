#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int flag = 0;///counter
    int i = a;
    while (i <= b) {
        int c = i % 10;
        int b = i / 10 % 10;
        int a = i / 100;
        if (a * a * a + b * b * b + c * c * c == i) {
            flag = 1;
            break;
        }
        i++;
    }
    cout << flag << endl;
    return 0;
}

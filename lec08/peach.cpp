#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[11];//a[0]..a[10];
    a[10] = 1;
    for (int i = 9; i >= 1; i--) {
        a[i] = 2 * (a[i + 1] + 1);
    }
    cout << a[1];
    return 0;
}

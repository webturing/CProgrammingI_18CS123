#include<bits/stdc++.h>

using namespace std;

int main() {
    int b[10];
    cout << sizeof(b) << endl;
    int a[] = {1, 2, 3, 3, 3, 3, 2, 2, 2, 324, 234, 23, 42, 34, 3, 3, 2, 2, 2, 324, 234, 23, 42, 34,};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

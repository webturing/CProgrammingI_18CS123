#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 5; i++) {
        // swap a[i] a[9-i]
        swap(a[i], a[9 - i]);
        // int t=a[i];a[i]=a[9-i];a[9-i]=t;
    }
    for (int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}

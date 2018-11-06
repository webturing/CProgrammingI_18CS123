#include<bits/stdc++.h>

using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

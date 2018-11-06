#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5,};
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, a + n);
//	reverse(a,a+n/2);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

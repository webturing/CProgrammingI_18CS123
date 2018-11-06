#include<bits/stdc++.h>

using namespace std;

int main() {
    int b[10];
    cout << sizeof(b) << endl;
    int a[] = {1, 2, 0, 3, 3, 0, 2, 2, 2, 324, 234, 23, 42, 34, 3, 3, 2, 2, 2, 324, 234, 23, 42, 34,};
    int n = sizeof(a) / sizeof(a[0]);
    //sort(a+0,a+n);//a[0,n)
    //sort(a,a+5);//a[0],a[1],a[2],a[3],a[4]
    sort(a + 3, a + 8);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

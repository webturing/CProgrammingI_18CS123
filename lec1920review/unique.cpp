#include<bits/stdc++.h>

using namespace std;

void print(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

}

int main() {
    int a[] = {2, 5, 3, 4, 6, 5, 2, 3, 3, 7, 9, 10, 1, 0};
    size_t n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    print(a, n);
    int m = unique(a, a + n) - a;
    print(a, m);
}

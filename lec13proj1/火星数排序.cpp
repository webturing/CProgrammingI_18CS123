#include<bits/stdc++.h>

using namespace std;

//���������� 11<9  2>100000
void print(int *a, int n) {
    for (int i = 0; i < n; i++)cout << a[i] << " ";
    cout << endl;
}

int Hash(int n) {
    int ret = 0;
    while (n > 0) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

bool Mars(int a, int b) {
    //return a<b;//less<int>()
    //return a>b;//greater<int>()
    int ma = Hash(a);
    int mb = Hash(b);
    if (ma != mb)return ma < mb;
    return a < b;
}

int main() {
    assert(Hash(12345) == 15);
    int a[] = {11, 3, 5, 7, 9, 2, 4, 6, 8, 10, 10000};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n, Mars);
    print(a, n);
    return 0;
}

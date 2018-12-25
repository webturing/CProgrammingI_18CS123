#include<bits/stdc++.h>

using namespace std;

int len(int n) {//pass by value
    int tot = 0;
    while (n > 0) {
        n = n / 10;
        ++tot;
    }
    return tot;
}

int main() {
    int n = 1234;
    cout << len(n) << endl;
    cout << n << endl;
    return 0;
}

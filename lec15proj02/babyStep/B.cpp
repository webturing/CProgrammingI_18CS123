#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int n;
        cin >> n;
        cout << n * (n + 1) * (n + 2) / 6 << endl;
    }
    return 0;
}

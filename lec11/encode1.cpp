#include<bits/stdc++.h>

using namespace std;

int main() {
    char ch = 'Y';
    int p = ch - 'A';
    int q = (p + 3) % 26;
    cout << (char) (q + 'A') << endl;
    return 0;
}

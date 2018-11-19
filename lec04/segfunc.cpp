#include<bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    int y;
    if (x < 1)y = x;
    else if (x < 10)y = 2 * x - 1;
    else y = 3 * x - 11;
    cout << y << endl;

    return 0;
}

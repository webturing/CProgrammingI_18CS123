#include <bits/stdc++.h>

using namespace std;

int main() {
    int b = 4;
    for (int x = 0; x < b; x++) {
        for (int y = 0; y <= x; y++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}

#include<bits/stdc++.h>

using namespace std;
const int R = 3;
const int C = 4;

int main() {
    int a[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> a[i][j];
        }
    }
    int Max = a[0][0], r = 0, c = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (a[i][j] > Max) {
                Max = a[i][j];
                r = i;
                c = j;
            }
        }
    }
    cout << Max << " " << r << " " << c << endl;
    return 0;
}


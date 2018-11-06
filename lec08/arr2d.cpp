#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[10] = {1, 2};//
    int b[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {5, 6, 7, 8},
                   {7, 8, 9, 9}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    int c[3][3] = {{1, 2},
                   {3},};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << "------------------d----------------" << endl;
    int d[3][3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

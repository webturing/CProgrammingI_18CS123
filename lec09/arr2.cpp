#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << a[1][2] << endl;
    cout << a[0][6] << endl;
    cout << a[2][-2] << endl;
    for (int i = 0; i < 12; i++)
        cout << a[0][i] << " ";
    cout << endl;
    return 0;
}

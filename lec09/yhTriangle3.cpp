#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout("yh.txt");
    int n = 30;
    int a[n + 1][n + 1];//you can define ```long long a[n+1][n+1]``` if necessary
    for (int i = 0; i <= n; i++)a[i][0] = 1;
    for (int i = 0; i <= n; i++)a[i][i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout("code.txt");
    char a[100] = "I LOVE YOU";
    cout << strlen(a) << endl;
    int k = 3;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] < 'A' || a[i] > 'Z') {
            cout << a[i];
            continue;
        }
        int p = a[i] - 'A';
        int q = (p + k) % 26;
        cout << char('A' + q);
    }
    return 0;
}

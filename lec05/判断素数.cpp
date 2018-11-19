#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int flag = 0;
    int i = 2;
    while (i <= n - 1) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0) {
        cout << "It is primer" << endl;
    } else {
        cout << "It is a compositor" << endl;
    }

    return 0;
}

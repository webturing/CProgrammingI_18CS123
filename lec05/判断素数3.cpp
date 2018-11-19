#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int flag = 0;
    if (n == 2)
        flag = 0;
    else if (n % 2 == 0)
        flag = 1;
    else {
        int i = 3;
        int m = sqrt(n);
        while (i <= m) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
            i += 2;
        }
    }
    if (flag == 0) {
        cout << "It is primer" << endl;
    } else {
        cout << "It is a compositor" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main() {
    int i = 1;
    int s = 0;///
    while (i <= 100) {
        if (i % 2 == 0)s += i;
        i++;
    }
    cout << s << endl;
    return 0;
}


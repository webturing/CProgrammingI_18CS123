#include<bits/stdc++.h>

using namespace std;

int main() {
    for (int a = 16;; a += 10) {
        char s[100];
        sprintf(s, "%d%d", a % 10, a / 10);
        int b;
        sscanf(s, "%d", &b);
        if (b == 4 * a) {
            printf("%d %d", a, b);
            break;
        }
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    printf("%d\n", a);
    printf("%d\n", a + 5);

    printf("%d\n", a[0]);//a[i] <=>*(a+i)
    printf("%d\n", (a + 5)[-4]);//ָ�����������

    int *p = a + 2;
    for (int *q = p + 7; q >= p - 2; q--) {
    }
    for (int i = 0; i < 5; i++) {
        printf("%d", a[*(p + i)]);
    }

    return 0;
}

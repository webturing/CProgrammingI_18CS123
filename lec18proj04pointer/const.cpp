#include<bits/stdc++.h>

using namespace std;

int main() {
    const int a = 4;
    int b = 5;
    printf("a=%d b=%d\n", a, b);
    printf("&a=%x &b=%x\n", &a, &b);
    int *p = &b;
    ++*p;
    printf("a=%d b=%d\n", a, b);
    printf("&a=%x &b=%x\n", &a, &b);
    p++;
    ++*p;
    printf("a=%d b=%d\n", a, b);
    printf("&a=%x &b=%x\n", &a, &b);

    return 0;
}

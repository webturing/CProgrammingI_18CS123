#include<stdio.h>

int strlen(char *s) {
    char *p = s;
    while (*p)++p;
    return p - s;
}

int main() {
    char s[100] = "hello world";
    printf("%d\n", strlen(s));
    return 0;
}

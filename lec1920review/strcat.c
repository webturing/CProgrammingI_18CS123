#include<stdio.h>

void strcat(char *s, const char *t) {
    while (*s)++s;
    while (*s++ = *t++);
}

int main() {
    char s[100] = "ball";
    char t[100] = "foot";
    // strcpy(t+4,s);//t=s;
    strcat(t, s);///t+=s
    puts(t);
    return 0;
}

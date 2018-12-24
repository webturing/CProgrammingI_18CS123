#include<stdio.h>
int main()
{
    char s[100]="hello world";
    puts(s);
    char *p=s;
    while(*p)++p;
    --p;
    while(p>=s){
        putchar(*p);
        --p;
    }

    return 0;
}

#include<stdio.h>

int strcmp(char*s,const char*t){
    while(*s&&*t&&*s==*t){
        s++;
        t++;
    }
    return *s-*t;
}
int main()
{
    char s[100]="ii";
    char t[100]="abc";
    printf("%d\n",strcmp(s,t));
    return 0;
}

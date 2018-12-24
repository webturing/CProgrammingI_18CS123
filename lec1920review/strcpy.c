#include<stdio.h>

void strcpy(char*s,const char*t){
    while(*s++=*t++);
}
int main()
{
    char s[100]="hel";
    char t[100];
    strcpy(t,s);//t=s;
    puts(t);
    return 0;
}

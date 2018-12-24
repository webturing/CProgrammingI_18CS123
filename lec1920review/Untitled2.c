#include<stdio.h>
int main()
{
    int a[10];
    int i;
   // for(i=0;i<10;i++)scanf("%d",&a[i]);
    int *p=a;
    while(p<a+10){
        scanf("%d",p);
        p++;
    }
    for(p=a;p<a+10;p++)
        printf("%d ",*p);
    printf("\n");
    return 0;
}

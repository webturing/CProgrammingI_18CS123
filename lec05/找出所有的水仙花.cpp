#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=100;
    while(i<=999){
        ///判断i是否是水仙花，如果是则将i输出
        int c=i%10;
        int b=i/10%10;
        int a=i/100;
        if(a*a*a+b*b*b+c*c*c==i)
            cout<<i<<" ";
        i++;
    }

    return 0;
}

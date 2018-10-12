#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=120;
    int a,b,c;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    cout<<c<<b<<a<<endl;
    int m=c*100+b*10+a;
    cout<<m<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=987654321;
    /// cout<<(int)(n/pow(10,(int)log10(n)))<<endl;
    double y=log10(n);
    /// y=y-(int)y;
    y=fmod(y,1.0);
    cout<<int(pow(10,y))<<endl;
    return 0;
}

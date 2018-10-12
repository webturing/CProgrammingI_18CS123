#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi=3.1419926;
    cout<<fixed<<pi<<endl;
    cout<<fixed<<setprecision(3)<<pi-0.0005<<endl;
    cout<<fixed<<setprecision(3)<<pi+5e-4<<endl;
    int y=(int)(pi*1000);
    cout<<fixed<<setprecision(3)<<y/1000.0<<endl;
    return 0;
}

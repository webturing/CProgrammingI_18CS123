#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=2;
    while(n<=100){
        int flag=0;
        int i=2;
        while(i<=n-1){
            if(n%i==0){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0)
            cout<<n<<" ";
        n++;
    }
    return 0;
}

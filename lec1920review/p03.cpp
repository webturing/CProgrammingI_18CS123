#include<bits/stdc++.h>
using namespace std;
#define SQ(x) ((x)*(x))
int main()
{
    const int N=55;
    char s[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        if(abs(i-N/2)+abs(j-N/2)<=N/2)
            s[i][j]='1'+N/2-abs(i-N/2)-abs(j-N/2);
        else
            s[i][j]=' ';
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout<<s[i][j];
        cout<<endl;
    }
    return 0;
}

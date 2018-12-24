#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]= {2,5,3,4,6,5,7,9,10,1,0};
    size_t n=sizeof(a)/sizeof(a[0]);
    //  sort(a,a+n);//NlogN
    int b[11]= {0};
    for(int i=0; i<n; i++)
        b[a[i]]++;

    for(int i=0; i<11; i++)
    {
       // for(int j=0; j<b[i]; j++)
       if(b[i])
            cout<<i<<" ";

    }
    cout<<endl;



}

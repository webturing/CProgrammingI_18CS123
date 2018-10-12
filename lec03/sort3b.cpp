#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        int t=a;a=b;b=t;
    }
    if(b>c){
        int t=b;b=c;c=t;
    }
    if(a>b){
        int t=a;a=b;b=t;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}

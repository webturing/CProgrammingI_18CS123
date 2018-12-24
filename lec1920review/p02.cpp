#include<bits/stdc++.h>
using namespace std;
///sum up for x in [a,b] if x%r==0
int sum(int a,int b,int r){
    a=(a+r-1)/r*r; //while(a%r!=0)++a;
    b=b/r*r;//while(b%r!=0)--b;
    int n=(b-a)/r+1;
    return n*(a+b)/2;
}

int main(){
    cout<<sum(1,1000,15)<<endl;//15
    cout<<sum(1,1000,3)+sum(1,1000,5)-sum(1,1000,15)<<endl;//3or5
    return 0;
}

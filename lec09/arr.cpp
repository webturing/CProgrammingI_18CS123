#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    a[1000]++;
    cout << dec << int(a) << endl;
    //cout<<&a[0]<<endl;
    cout << dec << (int) (a + 1) << endl;
    return 0;
}

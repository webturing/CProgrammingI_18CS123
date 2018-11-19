#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 20;//n=25?
    long long fact[n + 1] = {1, 1};
    for (int i = 2; i <= n; i++)
        fact[i] = fact[i - 1] * i;//i!=(i-1)!*i;

//	for(int i=0;i<=n;i++)//dump
//	cout<<i<<"!="<<fact[i]<<endl;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            int ret = fact[i] / fact[j] / fact[i - j];
            cout << ret << " ";
        }
        cout << endl;
    }
    return 0;
}

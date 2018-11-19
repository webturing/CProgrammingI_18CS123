#include<bits/stdc++.h>

using namespace std;

int main() {
    int a = 3;
    ///++a;///a++;a+=1;a=a+1;
    int b = ++a;

    cout << b << endl;
    int d = a++ + ++b;///poor bad habit;
    cout << d << endl;

    return 0;
}

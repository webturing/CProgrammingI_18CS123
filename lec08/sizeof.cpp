#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    //1byte=8bit
    int x;
    double y;
    cout << sizeof(x) << endl;//4
    cout << sizeof(y) << endl;//8
    cout << sizeof(float) << endl;//4
    cout << sizeof(a) << endl;
    return 0;
}

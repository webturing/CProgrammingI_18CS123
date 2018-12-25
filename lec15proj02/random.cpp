#include<bits/stdc++.h>

using namespace std;

int main() {
    srand(time(0));//NOW
    cout << rand() << endl;//0~32767一个随机数
    cout << rand() << endl;//0~32767一个随机数
    cout << rand() % 2 << endl;//coin 0 or 1
    cout << rand() % 6 + 1 << endl;//doss 1~6
    return 0;
}

#include<bits/stdc++.h>

using namespace std;//micro  Macro
//define定义规则宏 (伪函数)
//#define SQ(x) x*x //bad
#define SQ(x) ((x)*(x))
#define SIGN(x) ((x)>0?1:((x)<0?-1:0))
#define REP(i, a, b) for(int i=(a);i<=(b);i++)
#define PER(i, a, b) for(int i=(a);i>=(b);i--)

inline int Sign(int x) {
    if (x > 0)return 1;
    if (x < 0)return -1;
    return 0;
}

inline int sq(int x) {
    return x * x;
}

int main() {
    cout << SQ(10) << endl;//10*10
    cout << SQ(9 + 1) << endl;//9+1*9+1
    cout << sq(9 + 1) << endl;
    cout << Sign(5000) << endl;
    cout << SIGN(5000) << endl;
    cout << SIGN(-0.3) << endl;
    REP(i, 1, 10)cout << i << endl;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
struct Factor {
    LL up, down;
};

void Input(Factor &f);

void Output(Factor f);

void Simplify(Factor &f);

void add(Factor a, Factor b, Factor &c);

void sub(Factor a, Factor b, Factor &c);

int main() {
    Factor s = {0, 1};
    for (int i = 1; i <= 20; i++) {
        Factor f = {1, i};
        if (i % 2 == 0) {
            sub(s, f, s);
        } else {
            add(s, f, s);
        }
    }
    Output(s);
    return 0;
}

void Input(Factor &f) {//write
    cin >> f.up >> f.down;
    Simplify(f);
}

void Output(Factor f) {//read
    cout << f.up << "/" << f.down;
}

void Simplify(Factor &f) {//write
    if (f.up == 0) {
        f.up = 0;
        f.down = 1;
        return;
    }
    LL AbsUp = abs(f.up);
    LL AbsDown = abs(f.down);
    if (f.up * f.down < 0) {
        f.up = -AbsUp;
        f.down = AbsDown;
    } else {
        f.up = AbsUp;
        f.down = AbsDown;
    }
    LL g = __gcd(AbsUp, AbsDown);
    f.up /= g;
    f.down /= g;
}

void add(Factor a, Factor b, Factor &c) {
    LL up = a.up * b.down + a.down * b.up;
    LL down = a.down * b.down;
    c.up = up;
    c.down = down;
    Simplify(c);
}

void sub(Factor a, Factor b, Factor &c) {
    Factor mb = {-b.up, b.down};
    add(a, mb, c);
}

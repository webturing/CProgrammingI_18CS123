#include<cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

int coin() {
    return rand() % 2;
}

void testCoin() {
    int up = 0, down = 0;
    for (int i = 0; i < 1000000; i++) {
        int c = coin();
        if (c == 1)++up;
        else ++down;
    }
    cout << up << " " << down << endl;
}

int doss() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));
    testCoin();
    int a[7] = {0};
    for (int i = 0; i < 1000000; i++) {
        int d = doss();
        a[d]++;
    }
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " "
         << a[4] << " " << a[5] << " " << a[6] << endl;
}

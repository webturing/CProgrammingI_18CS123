#include<cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

int doss(int left, int right) {
    return rand() % (right - left + 1) + left;
}

int main() {
    srand(time(0));
    int a[13] = {0};
    for (int i = 0; i < 1000000; i++) {
        int x = doss(1, 6);
        int y = doss(1, 6);
        a[x + y]++;
    }
    for (int i = 2; i <= 12; i++)
        cout << i << " " << 100.0 * a[i] / 1000000 << endl;

    return 0;
}

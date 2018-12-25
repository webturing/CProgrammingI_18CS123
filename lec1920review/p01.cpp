
#include<bits/stdc++.h>

using namespace std;

///[a,b] //|b-a| С
int doss(int a, int b) {
    return rand() % (b - a + 1) + a;
}

double random() {
    return 1.0 * rand() / RAND_MAX;
}

int doss2(int a, int b) {
    return (int) (random() * (b - a + 1) + a);
}

int main() {

    return 0;
}

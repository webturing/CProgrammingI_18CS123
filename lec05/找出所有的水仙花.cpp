#include<bits/stdc++.h>

using namespace std;

int main() {
    int i = 100;
    while (i <= 999) {
        ///�ж�i�Ƿ���ˮ�ɻ����������i���
        int c = i % 10;
        int b = i / 10 % 10;
        int a = i / 100;
        if (a * a * a + b * b * b + c * c * c == i)
            cout << i << " ";
        i++;
    }

    return 0;
}

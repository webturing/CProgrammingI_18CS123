#include<bits/stdc++.h>

using namespace std;

int main() {
    int i = 1;
    int s = 0;//�ۼ���
    while (i <= 100) {
        //cout<<i<<endl;
        if (i % 2 == 1)s = s + i;
        i++;
    }
    cout << s << endl;
    return 0;
}

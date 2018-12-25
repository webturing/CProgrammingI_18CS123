#include<bits/stdc++.h>

using namespace std;

bool left(int p, int q) { return p + 1 == q || p == 4 && q == 0; }

bool right(int p, int q) { return left(q, p); }

bool near(int p, int q) { return left(p, q) || right(p, q); }

int main() {
    int zhao, qian, sun, li, zhou;
    zhao = 0;
    for (qian = 1; qian <= 4; ++qian)
        for (sun = 1; sun <= 4; ++sun)
            for (li = 1; li <= 4; ++li) {
                if (qian == sun || qian == li || sun == li)
                    continue;
                zhou = 10 - qian - sun - li;
                ///�ܻ���˵�����Է�ʱ��������Ǯ�Աߣ�Ǯ�����������
                bool zp = near(zhao, qian);
                bool zq = left(sun, qian) || left(li, qian);
                ///�����˵����Ǯ��������ߣ��Ұ�����������
                bool lp = left(qian, sun);
                bool lq = near(li, sun);
                if (lp == false && lq == false && zp == false && zq == false)
                    printf("%d %d %d %d %d\n", zhao, qian, sun, li, zhou);

            }
    return 0;
}

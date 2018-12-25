#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 1023;
    char *p = (char *) (&x);
    cout << (int) (*p) << endl;
    p++;
    cout << (int) (*p) << endl;
    p++;
    cout << (int) (*p) << endl;
    p++;
    cout << (int) (*p) << endl;
    void *q; //ͨ��ָ��Ķ��� ��ֻ��¼��ֵַ��
    q = &x;//�κ�����ָ�붼����ֱ��תΪͨ��ָ��
    //q++;q--;*q;//���ڶ��ǷǷ�����
    cout << *(int *) q << endl;//ͨ��ָ��ʹ��ǰ��Ҫת��Ϊ�ض�����

    return 0;
}

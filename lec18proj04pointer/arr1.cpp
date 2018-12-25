#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[10];//����Ϊ10 ������ʼ��ַ����a������
    a[0] = 5;
    a[9]++;//a[10]
    int b;//����Ϊ1 ��Ϊ(&b)������
    b = 4;
    &b[0] = 4;
    int *p;//����Ϊ0 ��Ϊp������
    p[0];//Խ��
    p = a;

    return 0;
}

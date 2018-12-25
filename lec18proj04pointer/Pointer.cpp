#include<bits/stdc++.h>

using namespace std;

int main() {
    int a = 4;
    a++;
    int *p;//δ��ʼ����ָ��
    //cout<<*p<<endl;//RE
    p = &a; //p����a  p�洢��a�ĵ�ַ
    cout << *p << endl;//OK
    cout << p[0] << endl;//all right
    ++*p;
    cout << a << endl;
    cout << "p=" << p << endl;
    p++;//ָ������һ����λ��sizeof(int))
    cout << "p=" << p << endl;
    cout << *p << endl;//RE
    cout << p[0] << endl;//RE
    cout << *(p - 1) << endl;//OK
    cout << p[-1] << endl;//OK

    return 0;
}

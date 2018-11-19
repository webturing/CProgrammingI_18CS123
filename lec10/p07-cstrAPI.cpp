#include<bits/stdc++.h>

using namespace std;
//strlen(s) length of s
//strcpy(a,b) a=b
//strcat(a,b) a+=b
//strcmp(a,b)  a<b -1 a==b 0 a>b 1
//strstr(s,t)*  t is a substring of s

int main() {
    char a[100] = "hello";
    char b[100] = "world";
    cout << strcmp(a, b) << endl;
    strcat(a, b);//a+=b;
    cout << b << endl;//"world"
    cout << a << endl;//"helloworld"
    strcpy(a, b);//a=b;
    cout << b << endl;//"world"
    cout << a << endl;//"world"
    sort(a, a + strlen(a));//
    cout << a << endl;//dlorw
    reverse(a, a + strlen(a));
    cout << a << endl;//wrold
    return 0;
}

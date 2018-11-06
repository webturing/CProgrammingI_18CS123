#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    //[from,to)
    sort(a, a + 10);//a[0]~a[9]
    sort(a, a + 5);//a[0]~a[4]
    sort(a + 1, a + 5);//a[1]~a[4];// &a[5]=a+5
    sort(a + 2, a + 7);//

    for (int i = 0; i < 10; i++)
        cout << a[i] << endl;
    return 0;
}

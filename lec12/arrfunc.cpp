#include<iostream>
#include<algorithm>

using namespace std;

void input(int *a, int n = 10) {
    for (int i = 0; i < n; i++)cin >> a[i];
}

void output(int a[], int n = 10) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[10];
    input(a);
    sort(a, a + 10);
    output(a);
    int b[20];
    input(b, 20);//
    int c[5];
    input(c, 5);

    return 0;
}

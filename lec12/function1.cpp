#include<iostream>
#include<cmath>

using namespace std;

void Swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int add(int a, int b) {//pass by value
    b++;
    return a + b;
}

void read(int x) {
    cin >> x;
}

int main() {
//	std::cout<<sqrt(2);
    int a = 3, b = 4;
    Swap(a, b);
    cout << a << " " << b << endl;
    add(a, b);
    cout << a << " " << b << endl;
    int x = 5;
    read(x);
    cout << x << endl;

    return 0;
}

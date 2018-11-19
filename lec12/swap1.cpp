#include<iostream>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a = 3, b = 4;
    std::cout << a << " " << b << std::endl;
    Swap(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}

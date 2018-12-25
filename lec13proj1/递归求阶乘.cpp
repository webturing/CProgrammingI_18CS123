#include<bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n <= 1)return 1;//base
    else return factorial(n - 1) * n;//recursion body
}

int main() {
    cout << factorial(5);
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

bool root2(int a, int b, int c, double &x1, double &x2) {
    double delta = b * b - 4 * a * c;
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return 1;
    }
    return 0;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double x1, x2;
    if (root2(a, b, c, x1, x2)) {
        cout << x1 << " " << x2 << endl;
    } else {
        cout << "No solutions" << endl;
    }
    return 0;
}

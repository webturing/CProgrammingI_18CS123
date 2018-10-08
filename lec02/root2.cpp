
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  double x1, x2;
  cin >> a >> b >> c;
  double delta = b * b - 4 * a * c;
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = c / a / x1;
  cout << fixed << setprecision(3) << x1 << " " << x2 << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  double pi = 3.1415926;
  double r;
  double S, P;
  cin >> r;
  S = pi * r * r;
  P = 2 * pi * r;
  cout << fixed << setprecision(2) << S << endl;
  cout << fixed << setprecision(2) << P << endl;
  return 0;
}

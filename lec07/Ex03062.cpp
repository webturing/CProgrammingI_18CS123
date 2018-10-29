#include <bits/stdc++.h>
using namespace std;
// 1!+2!+3!+..+20!
typedef long long LL;
int main() {
  int n;
  cin >> n;
  LL s = 0;
  LL p = 1LL;  /// compute i! then add it to S
  for (int i = 1; i <= n; i++) {
    p *= i;
    s += p;
  }
  cout << s << endl;
  return 0;
}

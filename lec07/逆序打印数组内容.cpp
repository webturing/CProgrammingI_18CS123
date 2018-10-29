#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10];
  for (int i = 0; i < 10; i++) cin >> a[i];

  for (int i = 10 - 1; i >= 0; i--) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}

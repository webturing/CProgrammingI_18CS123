#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  if (x <= 3) {
    cout << "Fishing" << endl;
  } else {
    if (x == 4)
      cout << "Sleeping" << endl;
    else
      cout << "Eating" << endl;
  }

  return 0;
}

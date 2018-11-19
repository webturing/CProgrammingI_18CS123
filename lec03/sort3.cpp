#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int Min, Max, Mid;
    Min = a;
    if (b < Min)Min = b;
    if (c < Min)Min = c;

    Max = a;
    if (b > Max)Max = b;
    if (c > Max)Max = c;

    Mid = a + b + c - Min - Max;
    cout << Min << " " << Mid << " " << Max << endl;
    return 0;
}

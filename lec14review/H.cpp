#include<bits/stdc++.h>

using namespace std;

int main() {
    char s[1000] = "ababbbasdfjkjkasdfjkljkalsdfjklasdf";
    int n = strlen(s);
    cout << s << endl;
    sort(s, s + n);
    cout << s << endl;
    *unique(s, s + n) = 0;
    cout << s << endl;
    return 0;
}

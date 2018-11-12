#include<bits/stdc++.h>

using namespace std;

int main() {
    char s[1000];
    fgets(s, 999, stdin);
    cout << s << endl;
    int letters, spaces, numbers, others;
    letters = spaces = numbers = others = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if ('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z')
            ++letters;
        else if ('0' <= ch && ch <= '9')
            ++numbers;
        else if (ch == ' ')
            ++spaces;
        else
            ++others;

    }
    cout << letters << " " << spaces << " " << numbers << " " << others << endl;
    return 0;
}

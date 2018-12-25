#include<bits/stdc++.h>

using namespace std;
struct Pipe {
    int length;
    int diameter;
    int number;
};

void Input(Pipe &p) {
    cin >> p.length >> p.diameter >> p.number;
}

bool cmp(Pipe &p, Pipe &q) {
    if (p.length != q.length)return p.length > q.length;//length DESC
    if (p.diameter - q.diameter)return p.diameter < q.diameter;//diameter ASC
    return p.number > q.number;//number DESC
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        int M;
        cin >> M;
        Pipe p[M];
        for (int i = 0; i < M; i++)Input(p[i]);
        sort(p, p + M, cmp);
        cout << p[0].number << endl;
    }
    return 0;
}

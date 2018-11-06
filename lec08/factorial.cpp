#include<bits/stdc++.h>
using namespace std;
const int N = 25;//constant
//n!  int( n<=12) long long (n<=20!)
int main() {
	long long a[N];
	a[0] = a[1] = 1;//0!=1!=1;
	for (int i = 2; i < N; i++)
		a[i] = a[i - 1] * i;//i!=(i-1)*i;
	for (int i = 0; i < N; i++)
		cout << a[i] << endl;

	return 0;
}

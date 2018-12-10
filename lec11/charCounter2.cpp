#include<bits/stdc++.h>

using namespace std;
int main() {
	char s[1000];
	fgets(s,999,stdin);
	cout<<s<<endl;
	int letters,spaces,numbers,others;
	letters=spaces=numbers=others=0;
	int n=strlen(s);
	for(int i=0;i<n;i++){
		char ch=s[i];
		if(isalpha(ch))
			++letters;
		else if(isdigit(ch))
			++numbers;
		else if(isspace(ch))
			++spaces;
		else
			++others;		
		
	}
	cout<<letters<<" "<<spaces<<" "<<numbers<<" "<<others<<endl;
	return 0;
}

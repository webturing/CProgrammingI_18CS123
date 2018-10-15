#include<bits/stdc++.h>
using namespace std;
int main() {
	int s;//score
	cin>>s;
	if(s<0||s>100) {
		cout<<"Are you kidding~"<<endl;
	}else if(s<60){
		cout<<"Fail"<<endl;
	}else if(s<70){
		cout<<"Pass"<<endl;
	}else if(s<80){
		cout<<"Good"<<endl;
	}else if(s<90){
		cout<<"Nice"<<endl;
	}else{
		cout<<"Wonderful~"<<endl;
	}
	return 0;
}

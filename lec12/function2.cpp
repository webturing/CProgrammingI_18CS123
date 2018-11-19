#include<iostream>

void grow(int& a) {
	a++;
}
int main() {
	int a=3;
	grow(a);
	std::cout<<a<<std::endl;
	return 0;
}

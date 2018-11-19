#include<iostream>
#include<string>

using namespace std;


int f(string s) {
    return s.size();
}

int f(int x = 5, int y = 3) {
    return x + y;
}

int main() {

    std::cout << f(3, 4) << std::endl;//7
    std::cout << f(3) << std::endl;//6
    std::cout << f("hello") << std::endl;
    std::cout << f() << std::endl; //8
    return 0;
}

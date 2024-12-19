#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "调用普通函数" << endl;
    int c = a + b;
    return c;
}

template<typename T>
T add(T a, T b) {
    cout << "调用函数模板" << endl;
    T c = a + b;
    return c;
}

int main() {
    double a = 1, b = 2;
    add(a, b);
    return 0;
}
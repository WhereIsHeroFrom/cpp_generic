#include <iostream>
using namespace std;

int addInt(int a, int b) {
    int c = a + b;
    return c;
}

double addDouble(double a, double b) {
    double c = a + b;
    return c;
}

template<typename T>
T add(T a, T b) {
    T c = a + b;
    return c;
}

int main() {
    int a = 1, b = 2;
    double d = 2.5;
    // int c = add(a, d);   错误！ 函数模板自动类型推导 无法进行 隐式类型转换
    // cout << c << endl;

    return 0;
}
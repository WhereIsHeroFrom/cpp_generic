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
    double d = 2.1;
    //int c = add(a, d);  错误
    //cout << c << endl;
    int c = add<int>(a, d);
    c = add<double>(a, d);

    // 函数模板的  【显式指定类型】 调用时的 【隐式类型转换】

    return 0;
}
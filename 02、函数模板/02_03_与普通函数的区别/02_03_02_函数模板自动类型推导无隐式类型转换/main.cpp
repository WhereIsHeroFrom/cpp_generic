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
    // int c = add(a, d);   ���� ����ģ���Զ������Ƶ� �޷����� ��ʽ����ת��
    // cout << c << endl;

    return 0;
}
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
    //int c = add(a, d);  ����
    //cout << c << endl;
    int c = add<int>(a, d);
    c = add<double>(a, d);

    // ����ģ���  ����ʽָ�����͡� ����ʱ�� ����ʽ����ת����

    return 0;
}
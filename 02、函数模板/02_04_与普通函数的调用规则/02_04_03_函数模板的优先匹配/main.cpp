#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "������ͨ����" << endl;
    int c = a + b;
    return c;
}

template<typename T>
T add(T a, T b) {
    cout << "���ú���ģ��" << endl;
    T c = a + b;
    return c;
}

int main() {
    double a = 1, b = 2;
    add(a, b);
    return 0;
}
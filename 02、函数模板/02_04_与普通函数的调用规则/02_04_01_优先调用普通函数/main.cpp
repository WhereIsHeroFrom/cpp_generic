#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "������ͨ����" << endl;
    return a + b;
}

template<typename T>
T add(T a, T b) {
    cout << "���ú���ģ��" << endl;
    return a + b;
}

int main() {
    int a = 1, b = 2;
    add(a, b);

    return 0;
}
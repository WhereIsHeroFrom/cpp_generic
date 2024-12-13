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
    int c = addInt(a, b);
    cout << c << endl;

    double aa = 1.1, bb = 1.91;
    double cc = addDouble(aa, bb);
    cout << cc << endl;

    c = add(a, b);
    cout << c << endl;

    cc = add(aa, bb);
    cout << cc << endl;

    return 0;
}
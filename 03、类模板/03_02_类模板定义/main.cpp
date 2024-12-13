#include <iostream>
using namespace std;

template<class T>
class DynamicArray {
private:
    T* elements;
    int size;
public:
    DynamicArray(int n) : size(n) {
        elements = new T[size];
    }
    ~DynamicArray() {
        delete[] elements;
    }
    T& operator[](int index) {
        return elements[index];
    }
};

int main() {
    //int n = 10;
    //int a[n];
    //int* p = new int[n];

    DynamicArray<double> da(100);
    da[1] = 3.1;
    da[9] = 4.2;
    cout << da[0] << ' ' << da[9] << endl;

    DynamicArray<char> dac(10);
    dac[0] = 'A';
    dac[1] = 'C';
    dac[2] = 'M';
    cout << dac[0] << dac[1] << dac[2] << endl;
    return 0;
}
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* elements;
    int size;
public:
    DynamicArray(int n) : size(n) {
        elements = new int[n];
    }
    ~DynamicArray() {
        delete[] elements;
    }
    int& operator[](int index) {
        return elements[index];
    }
};

int main() {
    int n = 10;
    // int a[n];
    int* p = new int[n];

    DynamicArray da(100);
    da[1] = 3;
    da[9] = 4;
    cout << da[0] << ' ' << da[1] << endl;

    return 0;
}

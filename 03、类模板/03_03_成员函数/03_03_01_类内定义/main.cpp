#include <iostream>
using namespace std;

template<class T>
class DynamicArray {
private:
    T* elements;
    int size;
public:
    DynamicArray(int n) : size(n) {
        elements = new T[n];
    }
    ~DynamicArray() {
        delete[] elements;
    }
    T& operator[](int index) {
        return elements[index];
    }
    // 更新第 index 个索引的元素，把它的值改成 value
    void update(int index, T value) {
        elements[index] = value;
    }
};

int main() {
    DynamicArray<char> dac(100);
    dac[56] = 'h';
    dac.update(56, 'u');
    cout << dac[56] << endl;
    return 0;
}

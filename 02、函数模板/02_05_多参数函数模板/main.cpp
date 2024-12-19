#include <iostream>
using namespace std;

template<typename T2, typename T3>
T2 add(T2 a, T3 b) {
    cout << typeid(T2).name() << endl;
    cout << typeid(T3).name() << endl;
    T2 c = a + b;
    return c;
}

int main() {
    double r = add(4.0f, 8881281881);

    return 0;
}
/*
1、函数模板支持多个类型参数
2、一旦有类型不能推导，就会导致编译失败
3、返回值类型无法作为推导依据
*/
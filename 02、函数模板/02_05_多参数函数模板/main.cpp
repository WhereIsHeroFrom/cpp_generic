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
1������ģ��֧�ֶ�����Ͳ���
2��һ�������Ͳ����Ƶ����ͻᵼ�±���ʧ��
3������ֵ�����޷���Ϊ�Ƶ�����
*/
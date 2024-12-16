#include <iostream>
using namespace std;

template<class NameType, class HpType>
class Hero {
public:
    Hero(NameType name, HpType hp) {
        this->m_name = name;
        this->m_hp = hp;
    }
private:
    NameType m_name;
    HpType m_hp;
};

// 1��ֱ��ָ������
void test1(Hero<string, double>& h) {

}

// 2������ģ�廯
template<typename T1, typename T2>
void test2(Hero<T1, T2>& h) {

}

// 3����ģ�廯
template<typename T>
void test3(T& h) {

}


int main() {
    Hero<string, double> h("�ν�", 100.0);
    test1(h);
    test2(h);
    test3(h);
    return 0;
}
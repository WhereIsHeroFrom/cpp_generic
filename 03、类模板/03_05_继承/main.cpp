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

template<class T1, class T2, class T3>
class HeroSon : public Hero<T1, T2> {
    T3 a;
};

int main() {
    swap();
    return 0;
}
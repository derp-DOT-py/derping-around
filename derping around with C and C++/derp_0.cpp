//derping around with typeinfo
#include <iostream>
#include <typeinfo>

int main() {
        auto x = {0};
        std::cout << typeid(x).name() << "\n";
}
// outputs "St16initializer_listIiE"
//I guess, this is the same as an std::initializer_list?

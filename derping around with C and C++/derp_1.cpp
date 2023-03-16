//moar derping around with typeinfo
#include <iostream>
#include <typeinfo>

int main() {
        std::string x = "\x21";
        const char* y = "!";
        printf("%s\n%s\n", typeid(x).name(), typeid(y).name());
        std::cout << x << ", " << y << ", " << (x==y) << "\n";
}
//not exactly sure what "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE" means, but it's apparently equivalent (in value) to a "PKc"

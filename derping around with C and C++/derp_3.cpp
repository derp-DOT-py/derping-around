//even moar derps!
#include <iostream>
#include <typeinfo>

int main() {
        auto x = {0};
        auto* y = &x;
        auto** z = &y;
        std::cout << typeid(x).name() << "\n";
        std::cout << typeid(y).name() << "\n";
        std::cout << typeid(z).name() << "\n";
        std::cout << x.begin() << "\n";
}
//add more to this example plz...
//no u?
//but, srsly though, I can't remember why I did this

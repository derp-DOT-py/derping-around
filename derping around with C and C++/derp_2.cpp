//moar derping with types
#include <iostream>
#include <string.h>

int main() {
        char x[] = {NULL};
        const char* y = "";

        std::cout << "raw x: " << x << "len x: " << strlen(x) << "\n";
        std::cout << "raw y: " << y << "len y: " << strlen(y) << "\n";
        std::cout << (x[0] == y[0]);
}
//len = 0 for both... last line returns true
//gives me a warning but I'm too much of a newb to care

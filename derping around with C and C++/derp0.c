//no idea where I pulled this from, maybe IRC? no idea why I cared, either
#include <stdio.h>

int main() {
        int a = 1, b = 2;
        int *p = &a + 1, *q = &b;
        printf("%d %d %d\n", p < q, p == q, p > q);

        return 0;
}
//outputs "0 0 1"
//...except when it doesn't (sometimes it's "0 1 0")

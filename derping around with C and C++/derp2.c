//derping around with strings
#include <stdio.h>
#include <string.h>

int main ()
{
        const char* x = "test";
        const char y[] = { 't', 'e', 's', 't', '\0' };
        printf("%s, %d\n%s, %d\n", x, strlen(x), y, strlen(y));
        printf("%d\n", x==y);

}
//two ways to initialize a string; equivalent in value (but in C++ will return different typeinfo)

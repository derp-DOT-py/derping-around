//printing environment variables
#include <stdio.h>
#include <stdlib.h>

int main() {
        char *value;
        value = getenv("PATH");
        printf("%s\n", value);
}
//three ways to do the thing; this is the third way
//note: you have to know the name of the environment variable you want to pass to getenv()

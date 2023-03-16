//printing environment variables
#include <stdio.h>

extern char **environ;

int main() {
        for (int i = 0; environ[i] != NULL; i++)
                printf("%s\n", environ[i]);
}
//three ways to do the thing; this is the second

//printing environment variables
#include <stdio.h>

int main(int argc, char** argv, char **envp) {
        for (int i = 0; envp[i] != NULL; i++)
                printf("%s\n", envp[i]);
}
//three ways to do the thing; this is the first way

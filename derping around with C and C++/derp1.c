//derping around with multibyte characters, with varying degrees of success
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
        const char test [] = "的";
        //const char test [] = "￹φωωβαρ␣ꀀ☺^LꆠҿקӇĿ룗";
        setlocale(LC_ALL, "");
        printf("%d, %d\n", mblen(test, strlen(test)), strlen(test));
        printf("sizeof: %d, raw: %s\n", sizeof(test), test);
}
//commented-out line didn't give output I wanted... the shorter/simpler one above it seemed reasonable
//can't remember why it's necessary to set the locale... some technical reason

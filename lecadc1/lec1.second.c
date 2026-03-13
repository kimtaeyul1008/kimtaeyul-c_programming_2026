#include<stdio.h>

int main() {

    int b = -3;
    printf("b %%d: %d\n", b);
    printf("b %%i: %i\n", b);
    printf("b %%c: %c\n", b);
    printf("b %%f: %f\n", (float)b);
    printf("b %%u: %u\n", (unsigned int)b);
    printf("-----\n");

    int c = 254;
    printf("c %%d: %d\n", c);
    printf("c %%i: %i\n", c);
    printf("c %%c: %c\n", c);
    printf("c %%f: %f\n", (float)c);
    printf("c %%e: %e\n", (double)c);
    printf("-----\n");

    unsigned char ch = 254;
    printf("ch %%d: %d\n", ch);
    printf("ch %%i: %i\n", ch);
    printf("ch %%c: %c\n", ch);
    printf("ch %%f: %f\n", (float)ch);
    printf("-----\n");

    char strc[6] = "abcde";
    printf("strc %%c: %c\n", strc[0]);
    printf("strc %%d: %d\n", strc[0]);
    printf("strc %%s: %s\n", strc);

    return 0;

}
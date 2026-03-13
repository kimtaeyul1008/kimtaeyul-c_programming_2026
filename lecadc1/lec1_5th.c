#include <stdio.h>

int main(void) {
    int a = 2;
    float a2 = 2.0f;
    int b = 3;
    float c = 3.0f;

    /* Integer remainder */
    printf("a %% b: %d\n", a % b);

    /* Floating-point remainder (manually computed) */
    float a_mod_c = (float)a - c * (int)((float)a / c);
    float a2_mod_b = a2 - b * (int)(a2 / b);

    printf("a %% c: %f\n", a_mod_c);
    printf("a2 %% b: %f\n", a2_mod_b);

    return 0;
}
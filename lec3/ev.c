#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int floor;
    int ho;

    if (scanf("%d %d", &floor, &ho) != 2) {
        fprintf(stderr, "Input must be two integers (floor and ho).\n");
        return EXIT_FAILURE;
    }

    if (floor <= 0 || ho <= 0) {
        fprintf(stderr, "Floor and ho must be positive integers.\n");
        return EXIT_FAILURE;
    }

    if (floor == 7) {
        printf("Use ev5!!\n");
        return EXIT_SUCCESS;
    }

    int floor_is_odd = floor % 2 != 0;
    int ho_is_odd = ho % 2 != 0;

    if (floor_is_odd && ho_is_odd) {
        printf("Use ev1!!\n");
    } else if (floor_is_odd && !ho_is_odd) {
        printf("Use ev2!!\n");
    } else if (!floor_is_odd && ho_is_odd) {
        printf("Use ev3!!\n");
    } else {
        printf("Use ev4!!\n");
    }

    return EXIT_SUCCESS;
}
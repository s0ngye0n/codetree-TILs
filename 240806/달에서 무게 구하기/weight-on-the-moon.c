#include <stdio.h>

int main() {
    int weight = 13;
    double gravity = 0.165;
    printf("%d * %lf = %lf", weight, gravity, weight*gravity);
    return 0;
}
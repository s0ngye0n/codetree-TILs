#include <stdio.h>

int main() {
    char c;
    double a, b;

    scanf("%c", &c);
    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("%c\n%.2lf\n%.2lf", c, a, b);

    return 0;
}
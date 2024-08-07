#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double x=a+b;
    double y=a-b;
    printf("%.2lf", x/y);
    return 0;
}
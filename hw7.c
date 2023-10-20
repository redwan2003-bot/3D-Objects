#include <stdio.h>

int main() {
    double u, a, t;

    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);

    printf("Enter acceleration (a): ");
    scanf("%lf", &a);

    printf("Enter time (t): ");
    scanf("%lf", &t);

    double v = u + (a * t);

    printf("v = %.2lf\n", v);

    return 0;
}


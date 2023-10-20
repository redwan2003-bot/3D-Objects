#include <stdio.h>

int main() {

    double a, b, c, d;

    printf("Enter value for a: ");
    scanf("%lf", &a);

    printf("Enter value for b: ");
    scanf("%lf", &b);

    printf("Enter value for c: ");
    scanf("%lf", &c);

    printf("Enter value for d: ");
    scanf("%lf", &d);

    double result = (a + b - c) * d - (a / d);

    printf("(%lf + %lf - %lf) * %lf - %lf / %lf = %lf\n", a, b, c, d, a, d, result);

    return 0;
}


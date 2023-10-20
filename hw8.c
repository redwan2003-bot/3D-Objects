#include <stdio.h>

int main() {

    double u, a, t;


    printf("Enter initial velocity (u): ");
    scanf("%lf",&u);

    printf("Enter acceleration (a): ");
    scanf("%lf", &a);

    printf("Enter time (t): ");
    scanf("%lf", &t);


    double s = u * t + 0.5 * a * t * t;

    // Display the result
    printf("s = %.2lf\n", s);

    return 0;
}

#include <stdio.h>

int main() {
    double u, a, t, s;

    // Input u, a, and t
    printf("Enter initial velocity (u):30 ");
    scanf("%lf", &u);
    printf("Enter acceleration (a):20 ");
    scanf("%lf", &a);
    printf("Enter time (t):40 ");
    scanf("%lf", &t);

    // Calculate displacement
    s = u * t + 0.5 * a * t * t;

    // Display the result
    printf("s = %.2lf\n", s);

    return 0;
}


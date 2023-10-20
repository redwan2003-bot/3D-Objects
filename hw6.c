#include <stdio.h>

int main() {

    double radius, area;
    const double pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * radius * radius;

    printf("Area = %.5lf\n", area);

    return 0;
}


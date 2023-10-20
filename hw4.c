
#include <stdio.h>

int main() {

    int a, b, c, d;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    printf("Enter value for d: ");
    scanf("%d", &d);

    int result = a * b + (a - c) / d + b;

    printf("%d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, result);

    return 0;
}

#include <stdio.h>

int main() {
    int heightInCentimeters;


    printf("Enter the height in centimeters: ");
    scanf("%d", &heightInCentimeters);


    int meters = heightInCentimeters / 100;
    int centimeters = heightInCentimeters % 100;


    printf("%d meter", meters);
    if (meters != 1) {
        printf("s");
    }
    printf(" %d centimeter", centimeters);
    if (centimeters != 1) {
        printf("s");
    }
    printf("\n");

    return 0;
}


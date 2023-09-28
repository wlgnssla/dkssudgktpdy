#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    double km = 0;
    printf("Please enter kilometers:");
    scanf_s("%lf", &km);
    double transform = km / 1.609;
    printf("%.1f km is equal to %.1f miles", km, transform);

    return 0;
}

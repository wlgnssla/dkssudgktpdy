#include <stdio.h>
#include <math.h>

// 표준편차 계산 함수
double calculateSD(double data[]) {
    double sum = 0.0, aver, standardDeviation = 0.0;

    for (int i = 0; i < 5; i++) {
        sum += data[i];
    }

    aver = sum / 5;

    for (int i = 0; i < 5; i++) {
        standardDeviation += pow(data[i] - aver, 2);
    }

    return sqrt(standardDeviation / 5);
}

int main() {
    double numbers[5];
    printf("Enter 5 real numbers: ");

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }
    double standardDeviation = calculateSD(numbers);
    printf("Standard Deviation = %.3lf\n", standardDeviation);

    return 0;
}



#include <stdio.h>

int main() {

    int numbers[5];
    int oddnumbers[5];
    int evennumbers[5];
    int oddcount = 0;
    int evencount = 0;
    printf("Please input five integers: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evennumbers[evencount] = numbers[i];
            evencount++;
        }
        else {
            oddnumbers[oddcount] = numbers[i];
            oddcount++;
        }
    }
    printf("Odd numbers: ");
    for (int i = 0; i < oddcount; i++) {
        printf("%d ", oddnumbers[i]);
    }
    printf("\nEven numbers: ");
    for (int i = 0; i < evencount; i++) {
        printf("%d ", evennumbers[i]);
    }


    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        int space = 5 - i;
        int star = 2 * i - 1;
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
    }

	return 0;
}
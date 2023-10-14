#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void transfer(int num) {
	if (num > 1) {
		transfer(num / 2);
	}
	printf("%d", num % 2);
}

int main() {
	int num;
	printf("Please enter a number:");
	scanf_s("%d", &num);
	transfer(num);

	return 0;
}
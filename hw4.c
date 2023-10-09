#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
	int num,prime = 0;
	printf("Please enter a number:");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			prime += 1;
			break;
		}	
	}
	if(prime == 1){
		printf("It is not a prime number");
	}
	else {
		printf("It is a prime number");
	}








	return 0;
}
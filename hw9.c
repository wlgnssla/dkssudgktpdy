#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	fgets(str, sizeof(str), stdin);
	int diff = 'a' - 'A';
	for (int i = 0; i <= strlen(str); i++) {
		if (str[i] >= 'A' && str[i] < 'Z') {
			printf("%c", str[i] + diff);
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c",str[i] - diff);
		}
		else
			printf("%c", str[i]);
	}
	return 0;
}
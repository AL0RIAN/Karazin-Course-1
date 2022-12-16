#include <stdio.h>

int main() {
	int number;
	printf("ENTER NUMBER: ");
	scanf("%d", &number);
	printf("RESULT: %d\n", (number % 10 * 10) + (number / 10)); 
	return 0;
}

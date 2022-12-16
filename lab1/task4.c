#include <stdio.h>

int main() {
	int number;
	printf("ENTER NUMBER: ");
	scanf("%d", &number);
	if ((number / 100) < (number / 10 % 10) && (number / 10 % 10) < (number % 10)) printf("True");
	else printf("False");
	return 0;
}

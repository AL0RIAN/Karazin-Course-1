#include <stdio.h>

int main() {
	int number, piece1, piece2;
	
	printf("Enter number: ");
	scanf("%d", &number);
	
	piece1 = (number / 100) % 10;
	printf("%d second digit\n", piece1);
	piece2 = (number / 10) % 10;
	printf("%d third digit\n", piece2);

	if (piece1 + piece2 > 9 && piece1 + piece2 < 100)
		printf("%d -- true", piece1 + piece2);
	else
		printf("%d -- false", piece1 + piece2);
	return 0;
}


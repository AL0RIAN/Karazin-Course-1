#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	system("cls");
	
	int K, flag;
	printf("¬ведите K (возраст): ");
	scanf("%d", &K);
	
	if (K >= 11 && K <= 14) flag = 3;
	else if (K % 10 == 1) flag = 1;
	else if (K % 10 == 2 || K % 10 == 3 || K % 10 == 4) flag = 2;
	else flag = 3;
	
	switch(flag) {
	case 1: printf("ћне %d год", K); break;
	case 2: printf("ћне %d года", K); break;
	case 3: printf("ћне %d лет", K); break;
	}
	return 0;
}


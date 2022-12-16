#include <stdio.h>

int main() {
	int n, count, pow, sum = 0, res = 1;
	printf("Enter n: ");
	scanf("%d", &n);
  
	for (count = 2; count <= n + 1; count++) {
	sum += res;
	res = 1; 
	for (pow = 1; pow <= count; pow++) {
		res *= count;
		}
	}
	printf("Result: %d", sum);
	return 0;
}

#include <stdio.h>
#include <math.h>

int factorial(int number) {
	int result = 1, count;
	if (number == 0) return 1;
	else
	for (count = 2; count <= number; count++) {
		result *= count; 
	}
	return result;
}	

int main() {
	float temp = 0, F, result = 0, e = pow(10, -6), x = 0.1;
	int k;
	for (x; x <= 1; x += 0.1) {
		F = 0.0;
		for (k = 1;; k++) {
			temp = pow(-1, k + 1) * ((pow(3, 2 * k + 1) - 3.0) / factorial(2 * k + 1)) * pow(x, 2 * k + 1);
			if (fabs(temp) > e) F += temp;
			else break;
		}
		printf("At %.1f F = %f\n", x, F);
		printf("S = %f\n", F - 4 * pow(cos(x), 3));
		printf("Delta = %d\n", F - (F - 4 * pow(cos(x), 3)));
		printf("\n");
		}
	return 0;
}



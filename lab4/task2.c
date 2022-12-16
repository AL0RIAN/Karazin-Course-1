#include <stdio.h>
#include <math.h>

int counter(int number) {
	int count = 0;
	while (number) {
		number = number / 10;
		count ++;
	}
	return count;
}


int main() {
	int N, k, i, temp, res = 0, count, copy;
	printf("ENTER N: ");
	scanf("%d", &N);
	count = counter(N);
	for (k = 2; k <= 16; k++) {	
		copy = N;
		res = 0;
		for (i = 0; i <= count + 1; i++) {
		res += (copy % 10) * pow(k, i);
		copy /= 10;
	}
	printf("k = %d: %d\n", k, res);
}
	return 0;
}

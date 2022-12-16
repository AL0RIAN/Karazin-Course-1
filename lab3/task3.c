#include <stdio.h>
#include <math.h>

int main() {
	int res = 0, count;
	for (count = 1; res < 1000 ; count++) {
		if (count % 2 == 0) res += pow(-count, 3);
		else res += pow(count, 3);
		printf("%d ", count);
		printf("%d\n", res);		
	}
  printf("Result: %d", count - 1);
	return 0;
}

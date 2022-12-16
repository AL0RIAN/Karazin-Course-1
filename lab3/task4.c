#include <stdio.h>
#include <math.h>

int main() {
	double Y, F, a = -2;
	int b = 1;
  while (-2.0 <= a && a <= 4.0) {
		if (a <= b) F = 1 + ((a + 1.0) / (2.0 * a));
		else F = (a + 1.0) / (2.0 * a);
		Y = ((2.0 * a) / (2.0 + 3.0 * sqrt(fabs(a)))) + (2.0 * F);
		printf("At %.1f = %f\n", a, Y);
		a += 0.5;
	}
	return 0;
}

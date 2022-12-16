#include <stdio.h>
#include <math.h>

int main() {
	double R, F, x = -0.175;
	int k;
	for (x; x <= 0.175; x += 0.025) {
		R = 0.;
		if (x > 0) F = 2.5 - exp(x);
		else F = 2.5 + exp(x);
		for (k = 0; k <= 10; k++) {
			R += pow(1 + (x / 2.0), k) + F;
		}
		printf("At %.3f = %f\n", x, R);
	}
}

#include <stdio.h>
#include <math.h>

int main() {

	float x, y;
	
	printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);
	
	if ((pow(x + 2, 2) + pow(y - 2, 2) <= 1)) printf("Point in the area");
	else if ((y <= 0 && y >= -3) && (x >= 0 && x <= 3) && (y >= x - 3)) printf("Point in the area");
	else printf("Point outside the area");
	
	return 0;
}


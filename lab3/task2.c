#include <stdio.h>
#include <stdio.h> 

 int main() {
   int a, b, N, n=0, count = 0;
   float x, y;
   printf("Enter a: ");
   scanf("%d", &a);
   printf("Enter b: ");
   scanf("%d", &b);
   printf("Enter N: ");
   scanf("%d", &N);
   printf("\n");
   for (n; n < N; n++) {
	 printf("%d point\n", n + 1);
     printf("Enter x: ");
     scanf("%f", &x);
     printf("Enter y: ");
     scanf("%f", &y);
     printf("\n");
     if (a <= x && x <= b && a <= y && y <= b) count++;
   }
   printf("Result: %d", count);
   return 0;
 }

#include <stdio.h>
#include <stdio.h> 

 int main() {
   int N, i = 0, res = 0;
   printf("Enter N: ");
   scanf("%d", &N);
   for (i; i <= N; i++) {
     res += pow(N + i, 2);
   }
   printf("%d", res);
   return 0;
 }

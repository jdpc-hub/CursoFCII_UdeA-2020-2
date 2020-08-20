#include <stdio.h>

int main() {
   int n1;
   int n2;
   float s;
   int n;
   float f;
   printf("Insterte un entero n1");
   scanf("%d", &n1);
   printf("Insterte un entero n2");
   scanf("%d", &n2);
   n = (n2 - n1)+1;
   f = n/2.0 ;
   s = (n1 + n2)*f;
   printf("La suma desde %d hasta %d es %f", n1, n2, s);


   return 0;
}

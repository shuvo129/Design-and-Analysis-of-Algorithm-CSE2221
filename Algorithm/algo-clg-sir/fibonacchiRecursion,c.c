
#include <stdio.h>

int fibbonacci(int n) {

   if(n<=1){
    return n;
   }
   else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n = 5;
   int i;
   printf("Fibbonacci of %d: " , n);

   for(i = 0;i<=n;i++) {
      printf("%d ",fibbonacci(i));
   }
}

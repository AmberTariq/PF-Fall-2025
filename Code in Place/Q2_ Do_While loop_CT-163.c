#include <stdio.h>
int main() {  //Print sum of digits using Do-While
   int n, sum = 0;
printf("Enter a number: ");
scanf("%d",&n);

do {
  sum +=n%10;
  n=n/10;
}while (n>0);

printf("The sum of digits is: %d", sum);
    return 0;
}

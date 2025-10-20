#include <stdio.h>
int main() {      //Print a number in Reverse-Order
  int n, lastDigit;
printf("Enter a number: ");
scanf("%d",&n);

printf("Reversed Number: ");
while(n>0){
    lastDigit= n%10;
    printf("%d",lastDigit);
    n= n/10;
}
    return 0;
}
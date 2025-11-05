#include <stdio.h>
int cube(int x) {
    return x * x * x; }
int main() {
 int num, result;
 
 printf("Enter a Number: ");
 scanf("%d",&num);
 
 result = cube(num);
 
 printf("The cube of %d is: %d\n",num,result);
 
    return 0;
}
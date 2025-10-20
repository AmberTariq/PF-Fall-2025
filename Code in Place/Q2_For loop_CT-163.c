#include <stdio.h>

int main() {      //Print Factorial of a Number
    int num;
    long fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial not defined for negative number!");
    }
    for(int i=1; i<=num; i++){
     fact=fact*i;
    }
    printf("The Factorial of %d is: %ld",num,fact);
    return 0;
}
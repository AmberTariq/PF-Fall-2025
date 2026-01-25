#include <stdio.h>

int main(){
    int n, sum=0, prod=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    int temp=n;
    while(temp>0){
        int digit = temp%10;
        sum += digit;
        prod *= digit;
        temp/=10;
    }

    printf("Product - Sum = %d\n", prod-sum);
    return 0;
}

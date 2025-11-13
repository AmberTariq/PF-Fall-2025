#include<stdio.h>
int sum(int num1, int num2) {
    return num1+num2;
}

int main(){
    int x,y;
    printf("Enter 1st Value: ");
    scanf("%d",&x);
    printf("Enter 2nd Value: ");
    scanf("%d",&y);
    
    int result = sum(x,y);
    printf("The sum of %d and %d is: %d ",x,y,result);
    return 0;
}
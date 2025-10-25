#include<stdio.h>
int main (){
    int a, b;

    printf("Enter value of 1st variable : ");
    scanf("%f",&a);

    printf("Enter value of 2nd variable : ");
    scanf("%f",&b);

        if(a>b){
            printf("1st variable is greater than 2nd variable");
        }else{
            printf("2nd variable is greater than 1st variable");
        }

      return 0;

}
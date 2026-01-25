#include <stdio.h>
int main()
 {
   int num;
   printf("Enter a number : ");
   scanf("%d",&num);

   if(num % 2 == 0){
    printf("You entered an Even number!");
   }else{
   printf("You entered an Odd number!");
  }  
    return 0;
}
#include <stdio.h>
int main()
 {
     int num;
   printf("Enter a number : ");
   scanf("%d",&num);

   if(num>0){
    printf("You entered a Positive number!");
   }else if(num<0){
   printf("You entered an Negative number!");
  }else{
    printf("You entered Zero!");
  }
    return 0;
}
#include <stdio.h>
int main() { //Tables from 1 to 5
    int i=1, j, prod;
 while (i<=5){
     j = 1;
     while (j<=10){
         prod= i*j;
         printf("%d X %d = %d\n",i,j,prod);
         j++;
     }
 
     printf("\n");
     i++;
 }

    return 0;
}


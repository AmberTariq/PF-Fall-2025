#include <stdio.h>
int main() {       //Print the pairs whose Sum is an Even Number
  int n;
printf("Enter a number: ");
scanf("%d",&n);

for (int i=1 ; i<=n; i++){
    for (int j = 1 ; j<=i; j++){
        if((i+j)%2==0){
            printf("(%d,%d) ",i,j);
        }
    }
}

    return 0;
}
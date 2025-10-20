#include <stdio.h>
int main() {         //Print Right-Angeled Triangle
    int n = 3;

    for (int i = 1; i <= 3; i++) {
       for (int j = 1; j<= i; j++){
          printf("*"); 
       }
             printf("\n");
        }
    return 0;
}
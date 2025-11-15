#include <stdio.h>
int main(){
    int a = 15;
    float b = 3.14;
    char c = 'Z';
     int *pi = &a;
     float *pf = &b;
     char *pc = &c;
     
     printf("Integar Value= %d\n",*pi);
     printf("Float  Value= %.3f\n",*pf);
     printf("Char Value= %c\n",*pc);

    return 0;
}
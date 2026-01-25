#include <stdio.h>
#include<string.h>
int main() {
    char src1[]="Amber ";
    char src2[]="Tariq";
    strcat(src1, src2);
    printf("src1= %s ",src1);
    return 0;
}
#include <stdio.h>
#include<string.h>
int main()
 {
    char src[]="Hello";
    char dest[15];
    
    strcpy(dest,src);
    printf("dest= %s ",dest);
    
    return 0;
}
#include <stdio.h>
int main()
{
    unsigned char num;
    printf("Enter an 8-bit number (0-255):\t");
    scanf("%hhu", &num);

    if(num <= 255){  
        if( (num & (1<<3)) && (num & (1<<6)) ){
            printf("\nBoth 4th and 7th bits are ON. Turning them OFF...\n");
            num = num & ~(1<<3);  
            num = num & ~(1<<6);  
        } else {
            printf("\nEither 4th or 7th bit is not ON.\n");
        }
    } else {
        printf("Invalid Number!");
    }

    printf("After operation, number = %d\n", num);
    return 0;
}
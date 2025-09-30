#include <stdio.h>
int main() 
{
    int n, m;
    printf("Enter 1st Number:\t");
    scanf("%d", &n);
    printf("Enter 2nd Number:\t");
    scanf("%d", &m);

    int i, j;
    for (i = 1, j = 10; i <= 10 && j >= 1; i++, j--) {
        printf("%d X %d = %d\n", n, j, n * j);  
        printf("%d X %d = %d\n", m, i, m * i);  
    }

    return 0;
}


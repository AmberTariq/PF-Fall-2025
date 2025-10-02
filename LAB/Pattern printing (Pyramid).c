#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows for the diamond: \n");
    scanf("%d", &rows);

    int i, j, k;

    // upper pyramid
    for (i = 1; i <= rows; i++) {
       for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
       
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
			}
        printf("\n");
		}

    // lower inverted pyramid
    for (i = rows - 1; i >= 1; i--) {
      for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
       
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
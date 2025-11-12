#include <stdio.h>

int fact(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int combination(int x, int y) {
    int ncr = fact(x) / (fact(y) * fact(x - y));
    return ncr;
}

int main() {
    int numRows;
    printf("Enter number of rows of the Pascal Triangle you want: ");
    scanf("%d", &numRows);

    for (int i = 0; i < numRows; i++) {   
        for (int space = 0; space < numRows - i - 1; space++) {
            printf("  "); 
        }

        for (int j = 0; j <= i; j++) {
            printf("%d   ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
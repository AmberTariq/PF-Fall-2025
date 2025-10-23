#include <stdio.h>

int main() {

    int r1, c1, r2, c2;

    printf("For size of Matrices A and B\n");
    printf("Enter number of rows of Matrix A: ");
    scanf("%d", &r1);
    printf("Enter number of columns of Matrix A: ");
    scanf("%d", &c1);
    printf("Enter number of rows of Matrix B: ");
    scanf("%d", &r2);
    printf("Enter number of columns of Matrix B: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("MATRIX MULTIPLICATION NOT POSSIBLE!\n");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix C (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

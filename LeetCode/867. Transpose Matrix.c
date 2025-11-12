#include <stdio.h>
int main(){

    int A[10][10], T[10][10];
    int rows, cols, i, j;
    
    printf("Enter the number of Rows & Columns: ");
    scanf("%d %d",&rows,&cols);
    
        printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Input For index (%d,%d): ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            T[j][i] = A[i][j];
        }
    }
    printf("Transpose of The Matrix:\n");
    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            printf("%d ",T[i][j]);
        }
        printf("\n");
}

    return 0;
}
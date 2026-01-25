#include<stdio.h>
int main(){
     int r1, c1, r2, c2;
     //input
     printf("Enter number of rows/columns of Matrix A: ");
     scanf("%d %d",&r1,&c1);
     int a[r1][c1];

     printf("Enter number of rows/columns of Matrix B: ");
     scanf("%d %d",&r2,&c2);
     int b[r2][c2];

       if(c1 != r2){
        printf("Matrix Multiplication NOT Possible!");
        return 0;
     }
      printf("\nEnter Elements of Matrix A:\n");
        for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("At [%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
     } printf("\n");
      
       printf("\nEnter Elements of Matrix B:\n");
        for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("At [%d,%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
     }
     //multiplying
     int res[r1][c2];
     for(int i =0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] = 0;
        for(int k=0; k<c1; k++){
            res[i][j] += a[i][k]*b[k][j];
        }
     }
  }

     //print the result
     printf("\n Resultant Matrix: \n");
 for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
        printf("%d ",res[i][j]);
        } printf("\n");
     } 

    return 0;
}
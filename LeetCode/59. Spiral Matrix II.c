#include<stdio.h>
int main(){

     int n;
     printf("Enter number of rows/columns:");
     scanf("%d",&n);

     int a[n][n];
      
     int maxr = n - 1, minr = 0;
     int maxc = n - 1, minc = 0;
     int tne = n * n;
     int count = 1;

     // spiral filling 
     while(count <= tne){
        // fill min row
        for(int j = minc; j <= maxc && count <= tne; j++){
           a[minr][j] = count++;
        } 
        minr++;

        // fill max column
        for(int i = minr; i <= maxr && count <= tne; i++){
            a[i][maxc] = count++;
        } 
        maxc--;

        // fill max row
        for(int j = maxc; j >= minc && count <= tne; j--){
            a[maxr][j] = count++;
        } 
        maxr--;

        // fill min column
        for(int i = maxr; i >= minr && count <= tne; i--){
            a[i][minc] = count++;
        } 
        minc++;

     }

     // print matrix
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
     }
     return 0;
}

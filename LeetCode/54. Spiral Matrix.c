#include<stdio.h>
int main(){

     int r,c;
     //input

     printf("Enter number of rows:");
     scanf("%d",&r);
     printf("Enter number of columns:");
     scanf("%d",&c);

     int a[r][c];

      printf("\nEnter Elements of Matrix:\n");
        for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
     } printf("\n");
      
     //spiral printing 
     int maxr = r - 1, minr = 0, maxc = c - 1, minc = 0, tne = r*c, count = 0;

     while(count<tne){
        //print min row
        for(int j=minc; j<=maxc && count<tne; j++){
            printf("%d ",a[minr][j]);
            count++;
        } minr++;

            //print max column
        for(int i=minr; i<=maxr && count<tne; i++){
            printf("%d ",a[i][maxc]);
            count++;
        } maxc--;

             //print max row
        for(int j=maxc; j>=minc && count<tne; j--){
            printf("%d ",a[maxr][j]);
            count++;
        } maxr--;

             //print min column
        for(int i=maxr; i>=minr && count<tne; i--){
            printf("%d ",a[i][minc]);
            count++;
        } minc++;

     }

    return 0;
}
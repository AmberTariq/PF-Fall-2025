#include<stdio.h>
int main(){

{
     int n;
     //input3

     printf("Enter number of rows/columns of Matrix: ");
     scanf("%d",&n);
     int a[n][n];

      printf("\nEnter Elements of Matrix:\n");
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
     } printf("\n");
      
     //wave printing (left to right)
     int res[n][n];
     for(int i =0; i<n; i++){
        if(i % 2 ==0){
             for(int j=0; j<n; j++){
        printf("%d ",a[i][j]);
        } }
        else{
              for(int j=n-1; j>=0; j--){
        printf("%d ",a[i][j]);
        }
     } printf("\n");
  }

    return 0;
}}
#include<stdio.h>
int main(){
     int n;
     int arr[n][n];

     //input
     printf("Enter number of rows/columns: ");
     scanf("%d",&n);
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter Element at [%d,%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
     }

     //transpose
      for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
     } printf("\n");

     //rotate
     for(int i=0; i<n; i++){
        int j=0, k=n-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
     }printf("\n");

     //print the result
 for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        printf("%d ",arr[i][j]);
        }printf("\n");
     } 

    return 0;
}
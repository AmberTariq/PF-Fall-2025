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
      
     //wave printing (down to up)
     for(int j =0; j<c; j++){
        if(j % 2 ==0){
              for(int i=r-1; i>=0; i--){
        printf("%d ",a[i][j]);
        }

}
        else{
           for(int i=0; i<r; i++){
        printf("%d ",a[i][j]);
        }   
     } printf("\n");
  }

    return 0;
}
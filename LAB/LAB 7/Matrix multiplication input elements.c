#include <stdio.h>
int main(){
    
int A[2][3];
int B[3][2];
int C[2][2];

printf("For Matrix A:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        printf("Enter Number= ");
        scanf("%d",&A[i][j]);
    }
}

printf("For Matrix B:\n");
for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
        printf("Enter Number= ");
        scanf("%d",&B[i][j]);
    }
}
for(int i = 0; i<2; i++){ 
    for(int j = 0; j<2; j++){
        C[i][j]=0;
        for (int k=0; k<3; k++){
C[i][j]+=A[i][k]*B[k][j];}}}

for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d ",C[i][j]);
    } printf("\n");
}

return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[2*n];
    printf("Enter 2n elements:\n");
    for(int i=0;i<2*n;i++) scanf("%d",&arr[i]);

    int shuffled[2*n];
    for(int i=0;i<n;i++){
        shuffled[2*i]=arr[i];
        shuffled[2*i+1]=arr[i+n];
    }

    printf("Shuffled array:\n");
    for(int i=0;i<2*n;i++) printf("%d ",shuffled[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter number of digits: ");
    scanf("%d",&n);

    int arr[n+1]; // extra space for carry
    printf("Enter digits:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=n-1;i>=0;i--){
        if(arr[i]<9){
            arr[i]++;
            break;
        } else {
            arr[i]=0;
        }
    }

    if(arr[0]==0){ // overflow
        arr[0]=1;
        n++;
    }

    printf("Result after plus one:\n");
    for(int i=0;i<n;i++) printf("%d",arr[i]);
    printf("\n");
    return 0;
}
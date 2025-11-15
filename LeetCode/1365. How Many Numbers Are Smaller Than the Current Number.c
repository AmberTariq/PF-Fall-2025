#include <stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n], count[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        count[i]=0;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i]) count[i]++;
        }
    }

    printf("Result array:\n");
    for(int i=0;i<n;i++) printf("%d ",count[i]);
    printf("\n");
    return 0;
}
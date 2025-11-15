#include <stdio.h>

int main() {
    int n;
    printf("Enter size of sorted array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter sorted elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int k=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for(int i=0;i<k;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
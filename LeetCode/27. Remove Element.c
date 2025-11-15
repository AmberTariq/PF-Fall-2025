#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int k = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main(){
    int n, val;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to remove: ");
    scanf("%d",&val);

    int newSize = removeElement(arr,n,val);
    printf("Array after removing %d:\n",val);
    for(int i=0;i<newSize;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

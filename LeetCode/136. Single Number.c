#include<stdio.h>
int singleNumber(int* nums, int numsSize){
    int result = 0;

    for(int i = 0; i < numsSize; i++){
        result ^= nums[i]; 
    }

    return result;
}

int main(){
    int arr[10], size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    printf("\nEnter Elements:\n"); //Repeated except for one
    for(int i =0; i<size; i++){
        printf("At [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int result = singleNumber(arr, size);
    printf("\nThe single number is: %d\n", result);
    return 0;
}
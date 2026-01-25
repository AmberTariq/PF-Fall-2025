#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    // Allocate memory for the result array
    int* ans = malloc(numsSize * sizeof(int));
    if (!ans) return NULL; // Safety check

    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        ans[i] = sum;
    }

    return ans;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size;
    int* result = runningSum(nums, 4, &size);

    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
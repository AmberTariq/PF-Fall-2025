#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **fizzBuzz(int n, int* returnSize) {
    // Allocate array of char* pointers
    char **ans = malloc(n * sizeof(char*));
    *returnSize = n;

    for (int i = 0; i < n; i++) {
        int num = i + 1;

        // Allocate enough space for the largest string ("FizzBuzz" = 8 chars + '\0')
        ans[i] = malloc(9 * sizeof(char));

        if (num % 3 == 0 && num % 5 == 0)
            sprintf(ans[i], "FizzBuzz");
        else if (num % 3 == 0)
            sprintf(ans[i], "Fizz");
        else if (num % 5 == 0)
            sprintf(ans[i], "Buzz");
        else
            sprintf(ans[i], "%d", num);
    }

    return ans;
}

int main() {
    int n = 15;        // You can change this value
    int returnSize;
    
    char **result = fizzBuzz(n, &returnSize);

    // Print results
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", result[i]);
    }

    // Free memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
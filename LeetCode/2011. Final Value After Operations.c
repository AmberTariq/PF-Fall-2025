#include <stdio.h>

int finalValueAfterOperations(char **operations, int operationsSize) {
    int x = 0;

    for (int i = 0; i < operationsSize; i++) {
        // The middle character determines + or -
        if (operations[i][1] == '+')
            x++;
        else
            x--;
    }

    return x;
}

int main() {
    char *operations[] = {"--X", "X++", "++X", "X--"};
    int operationsSize = sizeof(operations) / sizeof(operations[0]);

    int result = finalValueAfterOperations(operations, operationsSize);

    printf("Final value: %d\n", result);

    return 0;
}
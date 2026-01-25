#include <stdio.h>
#include <stdlib.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0;

    for (int i = 0; i < accountsSize; i++) {
        int sum = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            sum += accounts[i][j];
        }
        if (sum > max)
            max = sum;
    }

    return max;
}

int main() {
    int accountsSize = 3;
    int accountsColSize[] = {3, 3, 3};

    // Allocate 2D array
    int** accounts = malloc(accountsSize * sizeof(int*));
    accounts[0] = (int[]){1, 2, 3};
    accounts[1] = (int[]){3, 2, 1};
    accounts[2] = (int[]){4, 5, 6};

    int maxWealth = maximumWealth(accounts, accountsSize, accountsColSize);

    printf("Maximum wealth: %d\n", maxWealth);


    free(accounts);

    return 0;
}

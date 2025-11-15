#include <stdio.h>

int numberOfSteps(int num) {
    int steps = 0;

    while (num > 0) {
        if (num % 2 == 0)
            num /= 2;
        else
            num--;
        steps++;
    }

    return steps;
}

int main() {
    int num = 14;

    printf("Number of steps to reduce %d to zero: %d\n", num, numberOfSteps(num));

    num = 8;
    printf("Number of steps to reduce %d to zero: %d\n", num, numberOfSteps(num));

    num = 123;
    printf("Number of steps to reduce %d to zero: %d\n", num, numberOfSteps(num));

    return 0;
}
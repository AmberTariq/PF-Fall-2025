#include <stdio.h>
void printChar(char *p) {
    printf("%c", *p);
}

int main() {
    char alphabet = 'Y';
    char *p = &alphabet;

    printChar(p);   

    return 0;
}

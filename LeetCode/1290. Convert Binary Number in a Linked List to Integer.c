#include <stdio.h>

int main() {
    int n, num=0;
    printf("Enter size of binary number array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter binary digits (0 or 1):\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        num = num*2 + arr[i];
    }

    printf("Decimal number = %d\n", num);
    return 0;
}

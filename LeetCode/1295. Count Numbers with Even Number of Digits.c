#include <stdio.h>

int main() {
    int n, count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        int digits=0, num=arr[i];
        while(num>0){
            digits++;
            num/=10;
        }
        if(digits%2==0) count++;
    }

    printf("Numbers with even digits = %d\n", count);
    return 0;
}
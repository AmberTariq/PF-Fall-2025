#include <stdio.h>

int main() {
    int n, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j && arr[i] == 2*arr[j]){
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(found) printf("Yes, a number and its double exist.\n");
    else printf("No such numbers exist.\n");

    return 0;
}

#include <stdio.h>
int main(){
    int arr[5] = {23,4,7,12,10};
    int* p = arr;
    for(int i=0; i<5; i++){
         printf("Element at [%d] = %d\n",i,*(p+i));
    }
    return 0;
}
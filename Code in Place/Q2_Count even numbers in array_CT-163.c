#include <stdio.h>
int main() {
    int arr[]={1,2,3,4};
    int count=0;
    for(int i=0; i<4; i++){
       if(arr[i] % 2 == 0){
          count++; 
       }
    }
    
    printf("There are %d Even numbers",count);

    return 0;
}
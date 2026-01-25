#include<stdio.h>
int main(){

int arr[]={1,2,3,4};
int first=arr[0], second, n=4;

for(int i=1; i<n; i++){
  if(arr[i]>first){
    second=first;
    first=arr[i];  
  }
}

printf("Two Maximum elements are: %d, %d",first, second);
return 0;
}

#include <stdio.h>

int main() {
    int sum=0;
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(int i=0; i<3; i++){
          sum+=arr[i][i];
  }
  printf("Sum of Diagonals is: %d",sum);
    return 0;
}
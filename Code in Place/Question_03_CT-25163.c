#include <stdio.h>
int swap(int *a, int *b) {
     int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
  int x = 10, y =20;
  
  printf("Before swapping: ");
  printf("x = %d, y = %d\n", x, y);
  
  swap(&x,&y);
  
  printf("After swapping: ");
  printf("x = %d, y = %d\n", x, y);
  
    return 0;
}
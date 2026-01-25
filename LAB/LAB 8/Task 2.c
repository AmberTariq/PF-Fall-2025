 #include <stdio.h>
 #include <string.h>
 int main()
  {
    char A[20] = "Good";
    char B[] = "Morning";
    strcat(A, B);
    printf("Result: %s", A);
    return 0;
 }
 
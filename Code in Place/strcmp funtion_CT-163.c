#include <stdio.h>
#include <string.h>
int main() {
	char input1,input2;
	printf("Enter first string: ");
	scanf("%s",&input1);
	printf("Enter second string: ");
	scanf("%s",&input2);
	
     if (strcmp("input1", "input2") == 0)
    {
     printf("Equal");
  }   else {
  printf("Not Equal"); 
 }
return 0;

}
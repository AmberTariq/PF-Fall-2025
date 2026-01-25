#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a single character:\n");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("You've entered a Lowercase character!");
	}else if(ch>='A' && ch<='Z'){
		printf("You've entered an Uppercase character!");
	}else if(ch>='0' && ch<='9'){
		printf("You've entered a Digit!");
	}else{
		printf("You've' entered a special character!");
	}
	return 0;
}
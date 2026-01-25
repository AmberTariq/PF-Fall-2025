#include<stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	(num>0)? printf("Positive"): 
	(num<0)?printf("Negative"): printf("Neutral(ZERO)");
	}

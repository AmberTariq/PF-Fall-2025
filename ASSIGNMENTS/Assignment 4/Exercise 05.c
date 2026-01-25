#include<stdio.h>
int main()
{
	int num,value,lastDigit,doubled,reduced;
	printf("Enter a number:\t");
	scanf("%d",&num);
	
	value=num;
	while(value>99 || value<-99){
		lastDigit = value%10;
		doubled = 2*value;
		reduced = value/10;
		value = reduced-lastDigit;
		
		printf("\nStep:\t%d\n",value);
		
	}
	if(value==0 || value==7 || value==-7){
	printf("%d is DIVISIBLE by 7!",num);
    } 
    else{
    	printf("%d is NOT DIVISIBLE by 7!",num);
	}
	
	return 0;
	
	
}
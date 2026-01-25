#include<stdio.h>
int main()
{
	int day;
	printf("(1 for Monday\t2 for Tuesday\t3 for Wednesday\t4 for Thursday\t5 for Friday\t6 for Saturday\t7 for Sunday)\n");
	printf("Enter the number corresponding to the day(1-7):\n");
	scanf("%d",&day);
	
	switch(day){
		case 1: printf("It is Monday!"); break;
		case 2: printf("It is Tuesday!"); break;
		case 3: printf("It is Wednesday!"); break;
		case 4: printf("It is Thursday!"); break;
		case 5: printf("It is Friday!"); break;
		case 6: printf("It is Saturday!"); break;
		case 7: printf("It is Sunday!"); break;
		default: printf("Invalid Input!");
	}
	return 0;
}

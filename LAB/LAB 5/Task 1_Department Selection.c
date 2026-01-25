#include<stdio.h>
int main()
{
	int dept,subDept;
	printf("Select your department:\n1. CS Department\n2. EE Department\nEnter Your Choice:\n");
	scanf("%d",&dept);
	
	switch(dept){
		case 1:  //CS Department
		 printf("Your department is Computer Science!\nNow select your sub-department from below:\n");
		printf("1.CSIT\n2.CSDS\n3.CSCR\nEnter Your Choice:\n");
		scanf("%d",&subDept);
		
		switch(subDept){
			case 1: printf("You have selected department of Computer Science & Information Technology!"); break;
			case 2: printf("You have selected department of Computer Science & Data Sciences!"); break;
			case 3: printf("You have selected department of Computer Science & Cyber Security!"); break;
			default: printf("Invalid Input Entered!");
		}break;
		
		case 2:  //EE Department
		 printf("Your department is Electrical Engineering!"); break;
		default: printf("Please Enter a Valid Input!");
		
	} return 0;
}

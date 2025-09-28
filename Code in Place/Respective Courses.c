#include<stdio.h>
int main()
{
	int program,year;
	printf("1.Computer Engineering\n2.Electrical Engineering\n Choose your program type:\t");
	scanf("%d",&program);
	
	switch(program){
		case 1: 
	 	printf("Select the year your're in currently:\n1.First Year\n2.Second Year\n");
	 	scanf("%d",&year);
	  switch(year){
	  	case 1: printf("The courses which you'll be studying are as follows:\n1.Programming Fundamentals\n2.IT Fundamentals\n3.Islamic Studies\n");break;
	    case 2: printf("The courses which you'll be studying are as follows:\n1.Digital Logic design\n2.Basic Electronics\n3.Signals and Systems\n"); break;
	    default: printf("Invalid Input!");
	  }break;
	  
	  	case 2: 
	 	printf("Select the year your're in currently:\n1.First Year\n2.Second Year\n");
	 	scanf("%d",&year);
	  switch(year){
	  	case 1: printf("The courses which you'll be studying are as follows:\n1.Basic Electrical Engineering\n2.IT Fundamentals\n3.Calculus\n"); break;	
	    case 2: printf("The courses which you'll be studying are as follows:\n1.Electromagnetic Fields\n2.Circuits and Analysis\n3.Multi Variable Calculus\n"); break;
	    default: printf("Invalid Input!");
	  }break;	  
	}
	
	return 0;
	
}
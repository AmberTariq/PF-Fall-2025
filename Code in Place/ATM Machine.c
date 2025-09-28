#include<stdio.h>
int main()
{
	int balance,deposit,withdraw,check_balance,exit,choice;
	balance=1000;
	printf("Choose from below:\n1.Withdraw\n2.Deposit\n3.Check balance\n4.Exit\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("Enter the amount you want to withdraw\n");
 	 	scanf("%d",&withdraw);
 	 	if(withdraw<=balance){
 	 		balance -=withdraw;
 	 		printf("Remaining Balance %d",balance);
		  }else{
		  	printf("You are out of Money");
		  }
		  break;
		 case 2:
		  printf("Enter the amount you want to deposit:\t");
		  scanf("%d",&deposit);
		  balance+=deposit;
		  printf("New Balance:%d",balance); 
		  break;
		  
		  case 3:
		  	printf("Your balance is %d",balance);
		  	break;
		  
		 case 4:	
		    printf("Exiting......");
	        break;
	  default:
	  printf("Invalid Operation");	  }
	  
	  return 0;
	  
	}
	

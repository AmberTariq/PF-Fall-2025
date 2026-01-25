#include<stdio.h>
int main()        
{
	float cost,discount=0.0,saved,finalAmount;
		printf("Enter the cost of items:\t");
		scanf("%f",&cost);
		
		if(cost<=1999){
			discount=0.0; 
		}else if(cost>=2000 && cost<=4000){
			discount=0.20;
		}else if(cost>=4001 && cost<=6000){
			discount=0.30;
		}else if(cost>6000){
			discount=0.50;
		}
		
		saved=cost*discount;
		finalAmount=cost-saved;
		
		printf("\n Original Cost:\t%.2f",cost);
		printf("\n Discount:\t%.2f",discount*100);
		printf("\n Saved Amount:\t%.2f",saved);
		printf("\n Final Amount:\t%.2f",finalAmount);
		
		return 0;
}
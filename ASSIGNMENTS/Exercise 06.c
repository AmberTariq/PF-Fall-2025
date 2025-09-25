#include<stdio.h>
int main()
{
	float calories,fatgrams,caloriesfromfat,percentage;
	printf("Enter total calories:\t");
	scanf("%f",&calories);
	
	printf("Enter fat grams:\t");
	scanf("%f",&fatgrams);
	
	if(calories<0 || fatgrams<0){
		printf("\n Error: Calories and Fat grams cannot be negative!");
		return 0;
	}
	caloriesfromfat= fatgrams*9;
	
	if(caloriesfromfat>calories){
		printf("\n Error: Calories from fat cannot be greater than the total calories!");
		return 0;
	}
	
	percentage = (caloriesfromfat/calories)*100;
	printf("\n Calories from fat:\t%.2f",caloriesfromfat);
	printf("\n Percentage of calories from fat:\t%.2f",percentage);
	
	if(percentage<30){
		printf("The food is low in fat!");
	}
	
return 0;	
	
}
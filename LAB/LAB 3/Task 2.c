#include<stdio.h>
int main()
{
    int hours;
    float d1,d2,d3,d4,d5,totalDistance,averageSpeed;

    printf("Enter the number of hours for which the car travelled : ");
    scanf("%d",&hours);

    printf("Enter distance in 1 hour(s) in meter : ");
    scanf("%f",&d1);

    printf("Enter distance in 2 hour(s) in meter : ");
    scanf("%f",&d2);

    printf("Enter distance in 3 hour(s) in meter : ");
    scanf("%f",&d3);

    printf("Enter distance in 4 hour(s) in meter : ");
    scanf("%f",&d4);

    printf("Enter distance in 5 hour(s) in meter : ");
    scanf("%f",&d5);

    totalDistance=d1+d2+d3+d4+d5;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);

    return 0;
}
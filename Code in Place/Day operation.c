#include<stdio.h>
int main()
{
    int day;
    char time;
    printf("(1 for Monday\t2 for Tuesday\t3 for Wednesday\t4 for Thursday\t5 for Friday\t6 for Saturday\t7 for Sunday)\n");
    printf("Enter the number corresponding to the day(1-7):\t");
    scanf("%d",&day);
    
    switch(day){
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: 
            printf("Is it Morning or Evening?(M/E):\t"); //M for morning & E for evening
            scanf(" %c",&time);
            switch(time){
                case 'M': printf("Go to Class!\n"); break;
                case 'E': printf("Do your homework!\n"); break;
                default: printf("Invalid Input!\n");	
            }
            break; 

        case 6: 
        case 7:
            printf("Is it Morning or Evening?(M/E):\t"); //M for morning & E for evening
            scanf(" %c",&time);
            switch(time){
                case 'M': printf("Play Sports!\n"); break;
                case 'E': printf("Watch a movie!\n"); break;
                default: printf("Invalid Input!\n");
            }
            break;
        
        default: 
            printf("Invalid Day Input\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int age1;
    printf("Enter age of Haniya : ");
    scanf("%d",&age1);
    int age2;
    printf("\nEnter age of Ayesha : ");
    scanf("%d",&age2);
    int age3;
    printf("\nEnter age of Zoya : ");
    scanf("%d",&age3);

    if(age1<age3 && age1<age2 ){
        printf("Haniya is youngest");
    }else if(age2<age3 && age2<age1 ){
        printf("Ayesha is youngest");
    }else if(age3<age2 && age3<age1 ){
        printf("Zoya is youngest");
    }
        return 0;
	}
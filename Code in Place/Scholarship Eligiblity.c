#include <stdio.h>
int main()
{
    int marks, attendance;
    char activities;

    printf("Enter marks:\n");
    scanf("%d", &marks);

    if (marks >= 60) {
        printf("Enter The attendance:\n");
        scanf("%d", &attendance);

        if (attendance >= 75) {
            printf("Participation in extra-curricular activities (Y for yes/N for No):\n");
            scanf(" %c", &activities); 

            if (activities == 'Y' || activities == 'y') {
                printf("You are ELIGIBLE for Scholarship!");
            } else {
                printf("You are NOT ELIGIBLE for Scholarship!");
            }
        } else {
            printf("You are NOT ELIGIBLE for Scholarship!");
        }
    } else {
        printf("You are NOT ELIGIBLE for Scholarship!");
    }
}
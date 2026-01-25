#include <stdio.h>
int main(){

int size;
printf("Enter the number of Students: ");
scanf("%d",&size);

int marks[size];
for(int i=0; i<size; i++){
printf("Enter Marks= ");
scanf("%d", &marks[i]);
}
printf("\n");

for(int j=0; j<size; j++){
printf("%d ", marks[j]);
}

return 0;}
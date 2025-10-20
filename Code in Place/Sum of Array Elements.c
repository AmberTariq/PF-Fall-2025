#include<stdio.h>
int main()
{           //Sum of Array Elements
	int arr[]={10,20,30,40};
	int n=4, sum=0;
	for(int i=0; i<n; i++){
	sum=sum+arr[i];
	}
	
	printf("Sum of Array Elements are:%d",sum);
	
	return 0;

}

#include<stdio.h>
int main()
{                //Maximum Element in an Array
	int arr[]={5,12,3,18,7};
	int n=5, max=arr[0];
	for(int i=1; i<n; i++){
	if(arr[i]>max){
	max=arr[i];}
	}
	
	printf("Maximum Element is:%d",max);
	
	return 0;
	
	
	
}

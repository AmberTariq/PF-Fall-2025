#include <stdio.h>

int main(){
    int n, reversed=0, temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;
    while(temp>0){
        reversed = reversed*10 + temp%10;
        temp/=10;
    }

    if(reversed==n) printf("%d is a palindrome\n",n);
    else printf("%d is not a palindrome\n",n);

    return 0;
}

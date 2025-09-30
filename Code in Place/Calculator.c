#include<stdio.h>
int main()
  {                //Calculator     
        
    int a,b,sum,sub,mult,div,mod;
    char op;
    
    printf("Enter first operand: ");
    scanf("%d",&a);
    printf("Enter second operand: ");
    scanf("%d",&b);
    printf("Enter Operator (+ or - or * or / or %%): ");
    scanf(" %c",&op);  
    
    switch(op){
        case '+': 
            sum=a+b;
            printf("Sum: %d+%d=%d",a,b,sum); 
            break;

        case '-': 
           if(a>b){
           	sub=a-b;
            printf("Subtraction: %d-%d=%d",a,b,sub); 
		   } else if(a<b) {
		   		sub=b-a;
            printf("Subtraction: %d-%d=%d",b,a,sub); 
		   }break;

        case '*': 
            mult=a*b;
            printf("Multiplication: %d*%d=%d",a,b,mult); 
            break;

        case '/':
            if(b==0) 
                printf("Denominator cannot be zero!"); 
            else {
                div=a/b;
                printf("Division: %d/%d=%d",a,b,div);
            }
            break;
                
        case '%':
            if(b==0) 
                printf("Denominator cannot be zero!"); 
            else {
                mod=a%b;
                printf("Modulus: %d %% %d = %d",a,b,mod);
            }
            break;
        
        default: 
            printf("Invalid Operator!");
    }
    
    return 0;
}
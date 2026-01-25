#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,discriminant,root1,root2,realPart,imagPart;
	printf("Enter coefficient of a:\nEnter coefficient of b:\nEnter coefficient of c:\n");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a==0){
		 printf("Coefficient of a can never be ZERO in a Quadratic Equation!");
	}
	
	discriminant=b*b-4*a*c;
 if (discriminant > 0) {  //Real and distinct roots
       
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
         printf("Roots are real and distinct.\n");
         printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    } 
	else if(discriminant==0){ //Real and Equal roots
    	root1=root2= -b/(2*a);
         printf("Roots are real and equal.\n");
         printf("Root1 = Root2 = %.2f\n", root1);
	}
	else{   //Complex roots
		realPart= -b/(2*a);
		imagPart= sqrt(-discriminant)/(2*a);
		 printf("Roots are complex and conjugate.\n");
         printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
         printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
	}
	
	return 0;

}
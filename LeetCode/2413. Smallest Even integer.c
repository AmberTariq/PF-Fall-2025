int smallestEvenMultiple(int n) {
    if(n % 2 == 0){
   return n;
    }
    else {
        return n*2;
    }
}

int main(){
     int x;
     printf("Enter a number: ");
     scanf("%d", &x);

     int result = smallestEvenMultiple(x);
     printf("The smallest even multiple of %d is: %d",x,result);

    return 0;
}
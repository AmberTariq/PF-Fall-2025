#include<stdio.h>
int main()
{
    double basicBill=0.0, taxRate=0.10, totalBill;
    int remGB, totalGB;
    
    printf("Enter the number of GBs consumed: \n");
    scanf("%d", &totalGB);
    remGB = totalGB;
    
    if(remGB > 0){
        if(remGB >= 100){
            basicBill += 100 * 2.0;
            remGB -= 100;
        } else {
            basicBill += remGB * 2.0;
            remGB = 0;
        }
    }
    
    if(remGB > 0){
        if(remGB >= 100){
            basicBill += 100 * 1.5;
            remGB -= 100;
        } else {
            basicBill += remGB * 1.5;
            remGB = 0;
        }
    }
    
    if(remGB > 0){
        if(remGB >= 200){
            basicBill += 200 * 1.0;
            remGB -= 200;
        } else {
            basicBill += remGB * 1.0;
            remGB = 0;
        }
    }
    
    if(remGB > 0){
        basicBill += remGB * 0.5;  
        remGB = 0;
    }
    
    totalBill = basicBill + (basicBill * taxRate); 
    printf("Your total bill after tax is: %.3lf\n", totalBill);
    
    return 0;
}

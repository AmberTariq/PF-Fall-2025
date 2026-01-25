#include<stdio.h>
int main()
{
    double basicBill=0.0, taxRate=0.10, totalBill;
    int remGB, totalGB;
    
    double cost1 = 0, cost2 = 0, cost3 = 0, cost4 = 0;
    
    printf("Enter the number of GBs consumed: \n");
    scanf("%d", &totalGB);
    remGB = totalGB;

    if (remGB > 0) {
        if (remGB >= 100) {
            cost1 = 100 * 2.0;
            remGB -= 100;
        } else {
            cost1 = remGB * 2.0;
            remGB = 0;
        }
        basicBill += cost1;
    }

    if (remGB > 0) {
        if (remGB >= 100) {
            cost2 = 100 * 1.5;
            remGB -= 100;
        } else {
            cost2 = remGB * 1.5;
            remGB = 0;
        }
        basicBill += cost2;
    }

    if (remGB > 0) {
        if (remGB >= 200) {
            cost3 = 200 * 1.0;
            remGB -= 200;
        } else {
            cost3 = remGB * 1.0;
            remGB = 0;
        }
        basicBill += cost3;
    }

    if (remGB > 0) {
        cost4 = remGB * 0.5;
        remGB = 0;
        basicBill += cost4;
    }

    totalBill = basicBill + (basicBill * taxRate);
    printf("Your total bill after tax is: %.3lf\n", totalBill);
    
    return 0; 
}
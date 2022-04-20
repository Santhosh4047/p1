#include <stdio.h>
int main()
// program to find quotient and remainder
{ int bill_amt,giv_money,quont,rmndr;
    printf("PROGRAM TO FIND QUOTIENT AND REMAINDER\n");
    printf("Enter the bill amount : ");
    scanf("%d",&bill_amt);
    printf("Enter the money given by santo : ");
    scanf("%d",&giv_money);
    rmndr=bill_amt%giv_money;
    quont=bill_amt/giv_money;
    printf("The Quotient is %d \nThe Remainder is %d",quont,rmndr);
    return 0;
}

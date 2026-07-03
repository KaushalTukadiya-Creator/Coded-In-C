#include<stdio.h>
int main()
{
    float price;
    int r,p;
    printf("Enter the price:");
    scanf("%f",&price);

    r = price;
    p = ((price-r)*100);

    printf("\nRuppes is %d",r);
    printf("\nPaisa is %d",p);

    return 0;

}
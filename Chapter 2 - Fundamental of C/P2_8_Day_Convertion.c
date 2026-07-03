#include<stdio.h>
int main()
{
    int y,m,d,rd;
    printf("Enter total no. of days:");
    scanf("%d",&d);

    y=d/365;
    rd=d%365;
    m=rd/30;
    d=rd%30;

    printf("\nResult is : %d years , %d months , %d days",y,m,d);

    return 0;
}
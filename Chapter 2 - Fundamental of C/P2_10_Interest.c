#include<stdio.h>
int main()
{
    float si,p,n,r;
    printf("\nEnter the Principal Amount : ");
    scanf("%f",&p);
    printf("\nEnter the No. of Years : ");
    scanf("%f",&n);
    printf("\nEnter the Rate of Interest : ");
    scanf("%f",&r);
    si=p*n*r/100;
    printf("The SI is %f",si);
    return 0;
}
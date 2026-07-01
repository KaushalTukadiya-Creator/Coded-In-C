#include<stdio.h>
int main()
{
    float a,b;

    printf("Enter the 1st value :");
    scanf("%f",&a);

    printf("Enter the 2nd value :");
    scanf("%f",&b);

     printf("\nSum of %f and %f is %.2f ",a,b,a+b);
     printf("\nDifference of %f and %f is %.2f ",a,b,a-b);
     printf("\nMultiplication of %f and %f is %.2f ",a,b,a*b);
     if(b!=0)
     printf("\nDivision of %f and %f is %.2f ",a,b,a/b);
     else
     printf("\nError ! Division by 0 is not possible");
     
    return 0;
}
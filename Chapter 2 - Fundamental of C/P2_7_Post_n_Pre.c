#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a++;
    printf("\nUsing post increament(b=a++):");
    printf("\nValue of b=%d",b);
    printf("\nValue of a=%d",a);

    printf("\nEnter another number:");
    scanf("%d",&a);
    b=++a;
    printf("\nUsing pre increament(b=++a):");
    printf("\nValue of b=%d",b);
    printf("\nValue of a=%d",a);
    return 0;
}
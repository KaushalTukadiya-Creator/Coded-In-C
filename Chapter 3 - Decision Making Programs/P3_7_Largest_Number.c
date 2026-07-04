#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st Number A:");
    scanf("%d",&a);
    printf("Enter the 2nd Number B:");
    scanf("%d",&b);
    printf("Enter the 3rd Number C:");
    scanf("%d",&c);
    
if(a>b && a>c)
{
    printf("A is Greatest");
}
else if(b>a && b>c)
{
    printf("B is Greatest");
}
else 
{
    printf("C is Greatest");
}
return 0;
}
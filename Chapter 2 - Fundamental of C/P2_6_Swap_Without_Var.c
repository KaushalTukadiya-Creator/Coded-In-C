#include <stdio.h>
int main() 
{
    int a,b,temp;
    printf("Enter the 1st number :\n ");
    scanf("%d",&a);
    printf("Enter the 2nd number :\n ");
    scanf("%d",&b);

    printf("\nBefore Swapping : \n a=%d \n b=%d",a,b);

   a=a+b;
   b=a-b;
   a=a-b;
   
    printf("\nAfter Swapping : \n a=%d \n b=%d",a,b);

    return 0;
    
}
#include<stdio.h>
#include<math.h>
int main()
{
    float l,b;
    printf("Enter the length :");
    scanf("%f",&l);
    printf("Enter the width :");
    scanf("%f",&b);
    printf("\nArea of Reactangle is %f ",l*b);
    printf("\nPerimeter of Reactangle is %f ",2*(l+b));
    printf("\nDiagonal of Reactangle is %f ",sqrt(l*l+b*b));
    return 0;
}

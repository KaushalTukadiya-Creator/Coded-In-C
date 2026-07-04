#include <stdio.h>

int main() 
{
    int m;

    printf("Enter your marks (Out of 100): ");
    scanf("%d", &m);

    if (m>=80 && m<=100)
    {
        printf("Distinction");
    } 
    else if (m>=60 && m<=79)
    {
        printf("1st Class");
    } 
   else if (m>=35 && m<=59)
    {
        printf("2nd Class");
    } 
    else
    {
        printf("Fail");
    } 
    return 0;
}

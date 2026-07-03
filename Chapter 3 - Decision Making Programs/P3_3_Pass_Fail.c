#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,sum;
    float avg;
    printf("\nWrite the Marks Out of 100 for each subject");
    printf("\nEnter the Marks of 1st Subject:");
    scanf("%d",&m1);
    printf("\nEnter the Marks of 2nd Subject:");
    scanf("%d",&m2);
    printf("\nEnter the Marks of 3rd Subject:");
    scanf("%d",&m3);
    printf("\nEnter the Marks of 4th Subject:");
    scanf("%d",&m4);
    sum = m1+m2+m3+m4;
    avg = (float)sum/4;
    printf("Average Marks : %.2f",avg);
    if(avg>=33)
    {
        printf("\nPass");
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}
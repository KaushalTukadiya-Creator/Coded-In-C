#include<stdio.h>
int  main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("\nSum is : %d",sum);
    avg=(float)sum/n;
    printf("\nAverage is : %.2f",avg);
    return 0;
}
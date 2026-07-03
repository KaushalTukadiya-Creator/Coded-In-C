#include<stdio.h>
int  main()
{
    int i,n,sum=0,count=0;
    float avg;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        printf("%d\n",i);
        sum=sum+i;
        count++;
        }
    }
    printf("\nSum is : %d",sum);
    avg=(float)sum/count;
    printf("\nAverage is : %.2f",avg);
    return 0;
}
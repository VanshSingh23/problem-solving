#include<stdio.h>
void main()
{
     int n,sum=0;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    }
    printf("sum of series is : %d",sum);
}
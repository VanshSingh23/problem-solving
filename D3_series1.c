#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
void main()
{
    int n,sum=0;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+fact(i);
    }
    printf("the sum is : %d",sum);
}
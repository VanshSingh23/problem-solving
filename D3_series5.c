#include<stdio.h>
#include<math.h>
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
    int n,x;
    float sum=0;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("enter the value of x\n");
    scanf("%d",&x);
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(-1,i+1)*pow(x,2*i-1)/fact(2*i-1);
    }
    printf("the sum is : %f",sum);
}
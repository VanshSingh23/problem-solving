#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int j=1;j<=10-2*i;j++)
        {
            printf(" ");
        }    
        for(int k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
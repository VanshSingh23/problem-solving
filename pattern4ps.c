#include<stdio.h>
void main()
{
    int a=64;
    for(int i=1;i<=4;i++)
    {
        int k=i;
        for(int j=1;j<=i;j++)
        {
            printf("%c",a+k);
            k++;
        }
        printf("\n");
    }
}        
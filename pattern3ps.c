#include<stdio.h>
void main()
{
    int a=65;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
        }
        printf("\n");
        a++;
    }
}        
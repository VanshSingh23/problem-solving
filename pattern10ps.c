#include<stdio.h>
void main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<i;j++){
        printf(" ");
        }
        for(int k=1;k<=7-2*i;k++)
        printf("*");
        printf("\n");
    }
    for(int i=1;i<=2;i++)
    {
        for(int k=i;k<=1;k++)
        printf(" ");
        for(int j=1;j<=2*i+1;j++)
        printf("*");
        printf("\n");
    }
}        
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=6;i++)
    printf("%d",i);
    for(j=5;j>=1;j--)
    printf("%d",j);
    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        printf("%d",j);
        for(k=1;k<=2*i-1;k++)
        printf(" ");
        for(l=6-i;l>=1;l--)
        printf("%d",l);
        printf("\n");
    }
    
}
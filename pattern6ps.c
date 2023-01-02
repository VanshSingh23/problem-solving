#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=3;j>=i;j--){
        printf(" ");
        }
        for(int k=i;k<=2*i-1;k++)
        {
            printf("%d",k);
        }
        for(int k=2;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
#include<stdio.h>
void main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=3-i;j>=1;j--){
        printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
        printf("*");
        }
        printf("\n");
    }
    for(int z=1;z<=2;z++)
    {    
        for(int l=1;l<=z;l++)
        printf(" ");
        for(int x=5-2*z;x>=1;x--)
        printf("*");
        printf("\n");
    }
}        
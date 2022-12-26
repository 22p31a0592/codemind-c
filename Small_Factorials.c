#include<stdio.h>
int main()
{
    int n,i,j,k,fact;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        fact=1;
        for(j=1;j<=k;j++)
         {
             fact=fact*j;
         }
         printf("%d",fact);
         printf("
");
    }
}
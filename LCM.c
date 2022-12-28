#include<stdio.h>
int main()
{
    int k,n,max=0;
    scanf("%d%d",&n,&k);
    if(n<k)
    {
        max=n;
    }
    else
    {
        max=k;
    }
    while(1)
    {
        if(max%n==0&&max%k==0)
        {
         printf("%d",max);
         break;
        }
        max++;
    }
}
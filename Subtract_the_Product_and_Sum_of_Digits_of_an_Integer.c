#include<stdio.h>
int main()
{
    int n,sum=0,r,fact=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        fact=fact*r;
        n=n/10;
    }
    printf("%d",fact-sum);
}
#include<stdio.h>
int main()
{
    int n,r,sum=0,temp=1;
    scanf("%d",&n);
    int u,i;
    u=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        temp=temp*r;
        n=n/10;
    }
    
    if(sum==temp)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}
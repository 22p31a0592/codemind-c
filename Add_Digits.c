#include<stdio.h>
int main()
{
    int m,n,rev=0,k,r;
    scanf("%d",&m);
    while(1)
    {   rev=0;
        n=m;
        while(n!=0)
        {
            r=n%10;
            rev=rev+r;
            n=n/10;
        }
        k=rev;
        if(k<9)
        {
        printf("%d",k);
        break;
        }
        else
       {
        m=k;
       }
    }
}
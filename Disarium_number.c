#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,o,u,c=1,j=0,g=0,l,r,k=0;
    scanf("%d",&n);
    l=n;
    while (n!=0)
    {
        r=n%10;
        j=j*10+r;
        n=n/10;
    }
    u=j;
    while(u!=0)
    {
        o=u%10;
        g=g+pow(o,c);
        u=u/10;
        c++;
    }
    if(g==l)
    printf("True");
    else
printf("False");
}
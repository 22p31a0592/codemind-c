#include<stdio.h>
int main()
{
    int n,i,r,t,rev=0,sum=0,h;
    scanf("%d",&n);
    i=n*n;
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    h=rev*rev;
    while (h!=0)
    {
        t=h%10;
        sum=sum*10+t;
        h=h/10;
    }
    if(i==sum)
    printf("True");
    else
printf("False");
}
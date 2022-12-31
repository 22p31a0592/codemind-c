#include<stdio.h>
int main()
{
    int a[10],n,m,k=0,sum=0,fact,r,i,j;
    scanf("%d",&n);
    r=n;
    while(n!=0)
    {
        m=n%10;
        a[k]=m;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        fact=1;
        for(j=1;j<=a[i];j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    if(sum==r)
    printf("The number %d is a strong number",sum);
    else
    printf("The number %d is not a strong number",r);
}
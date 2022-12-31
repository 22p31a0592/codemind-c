#include<stdio.h>
int main()
{
    int n,i,j,a[10],t,u=0,c,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a[k]=i;
            k++;
        }
    }
    for(j=0;j<k;j++)
    {
        c=0;
        for(t=1;t<=a[j];t++)
        {
            if(a[j]%t==0)
         
                c++;
        }
        if(c!=2)
        {
            u++;
        }
    }
        printf("%d",u);
    
}
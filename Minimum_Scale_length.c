#include<stdio.h>
int main()
{
    int a[10],n,m=0,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++)
    {
        if(m<a[i])
        {
            m=a[i];
        }
    }
    while(1)
    {
        i=0;
        c=0;
        while(i<n)
        {
            if(a[i]%m==0)
                c++;
                i++;
        }
        if(c==n)
        break;
        else
        m--;
    }
    printf("%d",m);
     
}
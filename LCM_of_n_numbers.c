#include<stdio.h>
int main()
{
    int a[10],i,j,k,n,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    while(1)
    {
        i=0;
        c=0;
        while(i<n)
        {
            if(max%a[i]==0)
                c++;
                i++;
        }
            if(c==n)
                break;
            else
            max++;
        }
    printf("%d",max);
}
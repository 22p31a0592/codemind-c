#include<stdio.h>
int main()
{
    int n,c=0,i,j,a[10],r,t=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a[c]=r;
        n=n/10;
        c++;
    }
    for (i=0;i<=c;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    t++;
                }
            }
        }
    }
    if(t==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}
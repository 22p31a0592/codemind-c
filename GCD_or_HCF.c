#include<stdio.h>
int main()
{
    int n,c,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n&&i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
}
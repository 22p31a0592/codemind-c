#include<stdio.h>
int main()
{
    int n,m,j,i,r=0,t;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
       j=i;
        r=0;
        while(j!=0)
        {
            t=j%10;
            r=r*10+t;
            j=j/10;
        }
        if(r==i)
        printf("%d ",i);
        
        
          
    }
}
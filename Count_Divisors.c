#include<stdio.h>
int main()
{
    int a,b,h,i,c=0;
    scanf("%d%d%d",&a,&b,&h);
    for(i=a;i<=b;i++)
    {
       if(i%h==0)
       c++;
     }
     printf("%d",c);
}

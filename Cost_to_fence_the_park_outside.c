#include<stdio.h>
int main()
{
    int l,b,w,k,n;
    scanf("%d%d%d%d",&l,&b,&w,&n);
    k=(l+w+w)*(b+w+w)-l*b;
    int j;
    j=k*n;
    printf("%d",j);
}
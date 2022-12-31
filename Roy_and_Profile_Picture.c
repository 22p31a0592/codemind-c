#include<stdio.h>
int main()
{
    int n,m,i,a,b;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<n||b<n)
        printf("UPLOAD ANOTHER
");
        else
        if(a==n&&b==n || a==b)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}
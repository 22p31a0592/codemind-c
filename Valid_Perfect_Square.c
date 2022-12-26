#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,v,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        v=sqrt(j);
        if(j%v==0)
        {
        printf("True");
        }
        else
{
printf("False");
    }
    printf("
");
    
    }
}
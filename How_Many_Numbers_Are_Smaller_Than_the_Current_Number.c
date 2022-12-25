#include<stdio.h>
int main()
{
    int a[10],n,i,c=0,p=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        
            if(i==j)
            {
            continue;
            }
             else if (a[j]<a[i])
            {
                c++;
            }
            
        }
                
          printf("%d ",c);
          c=0;
        
    }
    
  
}
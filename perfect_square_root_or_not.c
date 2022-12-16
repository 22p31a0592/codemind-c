#include<stdio.h>
int main()
{
    int n,temp,c=1;
    scanf("%d",&n);
    temp=n;
   while(temp>0)
   {
       temp=temp-c;
       c=c+2;
   }
   if(temp==0)
   printf("True");
   else
   printf("False");
}
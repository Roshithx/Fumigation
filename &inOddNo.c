#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp,k;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]='&';
        }
    }
   
   
   printf("New Array:");
   for(i=n-1;i>=0;i--)
   {
    printf("%d ",a[i]);
   }

 
return 0;
}
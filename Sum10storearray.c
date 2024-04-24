//Write a program to find the sum of array elements which are multiples of 10 and store the elements into a new array.
#include<stdio.h>
int main()
{
    int i,j,n,a[100],b[100],sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%10==0)
        {
            sum+=a[i];
        }
    }
    printf("sum of array:%d\n",sum);
   for(i=0;i<n;i++)
   {
      if(a[i]%10==0)
      {
        b[i]=a[i];
        
      }
   } 
   printf("\nNew array:");
   for(i=0;i<n;i++)
   {
     printf("%d ",b[i]);
   }

return 0;
}
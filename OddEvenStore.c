//Program to store odd even no to seperate arrays:
#include<stdio.h>
int main()
{
    int i,j,n,a[100],b[100];
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array1:");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         if(a[i]%2!=0)
        {
            printf("ENter a even no:");
            i--;
        }
    }
    printf("Enter the elements of array2:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&b[i]);  
    if(b[i]%2==0)
    {
       printf("Enter a odd no for a array:");
       i--; 
    }
    }
   printf("Even Array:");
   for(i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
   
   printf("Odd Array:");
   for(i=0;i<n;i++)
   {
    printf("%d ",b[i]);
   }

 
return 0;
}
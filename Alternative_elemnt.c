//Program to print alternative element in an array:
#include<stdio.h>
int main()
{
    int i,j,n,a[100];
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array1:");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Alternate array");
    for(i=0;i<n+1;i+=2)
    {
        printf("%d",a[i]);
    }
  
  

 
return 0;
}
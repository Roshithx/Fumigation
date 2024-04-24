#include<stdio.h>
int main()
{
    int i,j,n,a[100],b[100];
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    printf("Orginal array\n:");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\nCopied Array:");
    //copy of array
    for(i=0;i<n;i++)
    {
       
       b[i]=a[i];
       printf("%d ",b[i]);
    }

   
    //average of array
 
return 0;
}
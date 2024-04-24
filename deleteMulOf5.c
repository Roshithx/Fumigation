#include<stdio.h>
int main()
{
    int i,j,n,a[100],sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
     int newsize=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%5!=0)
        {
           a[newsize]=a[i];
           newsize++;
        }
    }
    n=newsize;
    printf("Array Remove multiple of 5\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   

    
    
return 0;
}
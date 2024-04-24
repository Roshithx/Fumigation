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
    
    //sum of array
    for(i=0;i<n;i++)
    {
       
        sum+=a[i];
        
    }
    printf("Sum:%d",sum);
    //average of array
 
return 0;
}
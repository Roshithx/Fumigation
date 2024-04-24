#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp,k,sum=0,avg;
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
    printf("Total sum of array:%d",sum);
    //average of array
    for(i=0;i<n;i++)
    {
       avg=sum/n; 
    }
    printf("Average of array:%d",avg);
return 0;
}
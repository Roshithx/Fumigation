//Program to find second smallest element in array
#include<stdio.h>
int main()
{
    int i,j,n,a[100],smallest,second_smallest;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Current array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    smallest=a[0];
    second_smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i]; 
        }
        else if(a[i]<smallest && a[i]>second_smallest)
        {
            second_smallest=a[i];
        }
    }
    printf("Second smallest elemnt is:%d",second_smallest);
return 0;
}
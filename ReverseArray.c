//Write a program to reverse an array without using an additional array?
#include<stdio.h>
int main()
{
    int i,j,n,a[100];
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("CURRENT ARRAY:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nREVERSED ARRAY:");
    for(i=n-1;i>=0;i--)
    {
       printf("%d ",a[i]);
    }
    


return 0;
}
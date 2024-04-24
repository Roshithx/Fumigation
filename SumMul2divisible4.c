//Write a program to find the sum of array elements which are multiples of 2 and divisible by 4.
#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp,k,sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%4==0 || a[i]%2==0)
        {
            sum+=a[i];
        }
    }
    printf("sum of array:%d",sum);
        

return 0;
}
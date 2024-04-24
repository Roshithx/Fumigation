//Write a program to print the array by skipping two values next to the multiples of 5.
#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp,k;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%5==0)
        {
            printf("%d ",a[i]);
            i+=2;
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
   printf("\n");
return 0;
}
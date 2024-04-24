//Write a program to replace multiples of 5 with # and replace the numbers which are divisible by 7 with ‘+’
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
        if(a[i]%5==0)
        {
            a[i]='#';
        }
        else if(a[i]%7==0)
        {
            a[i]='+';
        }
    }
    printf("Array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

        

return 0;
}
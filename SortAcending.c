#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("Sorted ArraY:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    } 

 return 0;
}
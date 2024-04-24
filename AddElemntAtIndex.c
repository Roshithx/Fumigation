
#include<stdio.h>
int main()
{
    int i,j,n,a[100],position,value;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d",&position);
    printf("Enter the value:");
    scanf("%d",&value);
    for(i=n-1;i>=position-1;i--)
    {
        a[i+1]=a[i];
    }
    a[position-1]=value;
    printf("Array:");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }


return 0;
}
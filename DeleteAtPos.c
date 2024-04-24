
#include<stdio.h>
int main()
{
    int i,j,n,a[100],pos;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the pos:");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("Array:");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }


return 0;
}
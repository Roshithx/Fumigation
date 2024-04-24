//Program to reverse array and find Second Largest
#include<stdio.h>
int main()
{
    int i,j,n,a[100],largest,sl;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Current array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Reversed array:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    largest=a[0];
    sl=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        else if(a[i]>largest && a[i]<sl)
        {
            sl=a[i];
        }
    }
    printf("Second largest:%d",sl);


   

 
return 0;
}
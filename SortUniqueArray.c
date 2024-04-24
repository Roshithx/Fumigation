#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp,count=0;
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

    for(i=0;i<n;i++)
    {
        int isUnique=1;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                isUnique=0;
                break;
            }
        }
     if(isUnique)
     {
        count++;
        
     }    
    }
     printf("\nNo of unique element in array:%d",count);


 return 0;
}
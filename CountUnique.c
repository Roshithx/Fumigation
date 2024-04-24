//Program to find unique element and count in array
#include<stdio.h>
int main()
{
    int unique,i,j,n,a[100],count=0,sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        unique=1;
        for(j=0;j<i;j++)
        {
        if(a[i]==a[j])
        {
            unique=0;
            break;
        }
     
    }
       if(unique)
       {
         count++;
         sum+=a[i];
       }
    } 

    printf("Count:%d",count);
    printf("Sum %d",sum);
    printf("Unique array");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    

return 0;
}
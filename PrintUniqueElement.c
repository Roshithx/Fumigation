#include<stdio.h>
int main()
{
    int i,j,a[100],n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //For finding unique element

    for(i=0;i<n;i++)
    {
        int isunique=1;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                isunique=0;
                break;
            }
        }
       
        if(isunique)
        {
            printf("%d ",a[i]);
        }
    }
     printf("Unique elements:");
        for(i=0;i<n;i++)
        {
             printf("%d",a[i]);
        }
    return 0;
 }
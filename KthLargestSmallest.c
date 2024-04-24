//Write a program to find k th largest and smallest element
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
    printf("Enter the k th element:");
    scanf("%d",&k);
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
    printf("The kth smallest element is:%d\n",a[k-1]);

    printf("The kth Largest element is:%d\n",a[n-k]);
    

 
return 0;
}
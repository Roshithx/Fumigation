
#include<stdio.h>
int main()
{
    int i,j,n,a[100],b[100],c[200],limit1,limit2,limit3;
    printf("Enter the limit1:");
    scanf("%d",&limit1);
    printf("Enter the elements of array1:");
    for(i=0;i<limit1;i++)
    {
    scanf("%d",&a[i]);
    }
     printf("Enter the limit2:");
    scanf("%d",&limit2);
    printf("Enter the element of array2:");
    for(i=0;i<limit2;i++)
    {
        scanf("%d",&b[i]);
    }

   limit3=limit1+limit2;
   for(i=0;i<limit1;i++)
   {
      c[i]=a[i];

   }
   for(i=0;i<limit2;i++)
   {
     c[limit1+i]=b[i];
   }
  
   for(i=0;i<limit3;i++)
   {
    for(j=0;j<limit3-1;j++)
    {
        if(c[j]>c[j+1])
        {
            int temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
        }
    }
   }
    printf("Merged and sorted array: ");
    for (int i = 0; i < limit3; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");


return 0;
}
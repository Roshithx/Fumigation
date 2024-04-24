//Write a program to find the most repeated element in an array.
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
    int maxcount=0;
        int mostelemnt=a[0];
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
        {
            count++;
        }
        }
    
    if(count>maxcount)
    {
        maxcount=count;
        mostelemnt=a[i];
    }
    }  

      printf("The most repeated element in the array is: %d\n", mostelemnt); 

return 0;
}
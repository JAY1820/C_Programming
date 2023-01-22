#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,max=INT_MIN,min=INT_MAX;
    printf("Enter N:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMaximum No :%d",max);
    printf("\nMinimum No :%d",min);
    return 0;
}
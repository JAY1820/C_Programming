#include <stdio.h>
void get(int *a,int n)
{
	int c,temp=0;
	printf("1.Ascending\n2.Descening\n");
	printf("Enter Your Choice:");
	scanf("%d",&c);
	if(c==1)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		printf("Ascending Sorting....\n");
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				if(a[i]<a[j+1])
				{
					temp = a[i];
					a[i] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		printf("Descending Sorting....\n");
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}	}	}
int main()
{
	int n;
	printf("Enter Array Size:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter Array %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
			printf("%d ",a[i]);
	}
	printf("\n");
	get(a,n);
	return 0;
}

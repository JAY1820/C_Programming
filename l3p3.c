#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr,n,m,sum=0;
	printf("Enter N number:");
	scanf("%d",&n);
	
	arr = (int *) malloc (n * sizeof(int));
	
	printf("Enter Old Elements...\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
		sum += *(arr+i);
	}
	
	printf("Sum of Old Size array: %d\n",sum);
	sum = 0;
	
	printf("\nEnter New Size:");
	scanf("%d",&m);
	
	arr = (int *) realloc (arr, m * sizeof(int));
	
	printf("\nEnter New Array Elements...\n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",(arr+i));
		sum += *(arr+i);	
	}
    
	printf("Sum of Old Size array: %d\n",sum);
	free(arr);
	return 0;
}

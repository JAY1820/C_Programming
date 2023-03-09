#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr,n,m;
	printf("Enter N number:");
	scanf("%d",&n);
	arr = (int *) malloc (n * sizeof(int));
	printf("Enter Elements...\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}

	printf("\nDiplaying Old Array...\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
		printf("%p\n",(arr+i));
	}
	
	printf("\n\nEnter New Size:");
	scanf("%d",&m);
	
	arr = (int *) realloc (arr, m * sizeof(int));
	
	printf("\nEnter New Array Elements...\n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",(arr+i));	
	}
	printf("\nDiplaying New Array...\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",*(arr+i));
		printf("%p\n",(arr+i));
	}
	
	free(arr);
	return 0;
}

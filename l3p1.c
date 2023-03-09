#include <stdio.h>
struct Book{
	char book_name[25];
	char author_name[25];
	int pages;
	int price;
};

void display(struct Book *ptr)
{
	for(int i=0;i<3;i++)
	{
		printf("Book Name:%s\n",ptr->book_name);
		printf("Author Name:%s\n",ptr->author_name);
		printf("Pages:%d\n",ptr->pages);
		printf("Price:%d\n",ptr->price);
		ptr++;
	}
}

int main()
{
	struct Book b1[3];
	struct Book *ptr = b1;
	
	for(int i=0;i<3;i++)
	{
		printf("Enter Book name, Author name, pages & price:\n");
		scanf("%s %s %d %d",ptr->book_name,ptr->author_name,&ptr->pages,&ptr->price);
		ptr++;
	}
	ptr = b1;
	printf("\nif Book name start with D........\n");
	for(int i=0;i<3;i++)
	{
		if(ptr->book_name[0] == 'D')
		{
			printf("Book Name:%s\n",ptr->book_name);
			printf("Author Name:%s\n",ptr->author_name);
			printf("Pages:%d\n",ptr->pages);
			printf("Price:%d\n",ptr->price);
		}
		ptr++;
	}
	printf("\nDisplaying all books.......\n");
	display(b1);
	free(ptr);
	return 0;
}

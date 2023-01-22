#include <stdio.h>
#include <string.h>
void palindrome(char[]);
int main()
{
	char s[20];
	printf("Enter String:");
	scanf("%s",s);
	palindrome(s);
	return 0;
}

void palindrome(char s[])
{
	int length;
	int temp,c=0,j;
	char a[20];
	length = strlen(s);
	printf("length Is %d",length);
	for(int i=0;i<length;i++)
	{
	
		a[i] = s[length-i-1];
		printf("%c ",a[i]);
	}
	
	
	for(int i=0;i<length;i++)
	{
		printf("\n a %c s %c\n",a[i],s[i]);
		if(a[i] == s[i])
		{
			 c++;
		}
	}
	printf("c is %d",c);
	if(c==length)
	{
		printf("\npalindrome");
	}
	else
	{
		printf("\nnot palindrome");
	}
}

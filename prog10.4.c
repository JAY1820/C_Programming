#include <stdio.h>
#include <string.h>
#include <ctype.h>
void upper(char*);

int main()
{
	char s[22];
	printf("Enter String:");
	scanf("%s",s);
	upper(s);
	return 0;
}

void upper(char *s)
{
	for(int i=0;i<strlen(s);i++)
	{
		putchar(toupper(s[i]));
	}
	printf("\n");
}

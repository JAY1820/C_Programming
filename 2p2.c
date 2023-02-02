#include <stdio.h>


int main()
{
	//declare string variables
	char str1[100];
	char str2[100];
	
	int i;	
	int flag=1;
	
	//declare & initialize pointer variables
	char *pStr1=str1;
	char *pStr2=str2;
	
	//read strings 
	printf("Enter string 1: ");	
	scanf("\n %s",pStr1);
	printf("Enter string 2: ");	
	scanf("\n %s",pStr2);
	
	//print strings
	printf("string1: %s\nstring2: %s\n",pStr1,pStr2);
	
	//comparing strings
	for(i=0; (*(pStr1+i))!='\0'; i++)
	{
		if(*(pStr1+i) != *(pStr2+i))
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		printf("Strings are same.\n");
	else
		printf("Strings are not same.\n");
	
	return 0;	
}

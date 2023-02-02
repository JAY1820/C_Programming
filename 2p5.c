#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="pop";

    char *p1;
    p1=str;
    int len=strlen(p1);
    int p=0;

    for (int i = 0; len>i; i++)
    {
        if (p1[i]==p1[len-(i+1)])
        {
            p=1;
        }
        else{
            p=0;
        }
        
    }
     
     if (p==1)
     {
        printf("\n it is palindrome");
     }
     else
        
        printf("\n it is not palindrome");
     
return 0;

}
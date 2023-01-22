#include <stdio.h>
#include <string.h>
int main()
{
    int n,rev=0,temp;
    scanf("%d",&n);

    for(temp=n;n>0;n=n/10)
    {
        rev=rev*10 +(n%10);
    }
     if(rev==temp)
        printf("\n %d is a palindeome",temp);
    
     else
        printf("\n %d is not a palindeome",temp);
 
    return 0;
}

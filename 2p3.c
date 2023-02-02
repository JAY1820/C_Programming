#include <stdio.h>
int getnum()
{
    int n;
    printf("\n enter a number");
    scanf("%d", &n);
    return n;
}

int (*ptr)(int);
int iseven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int isodd(int n)
{
    if (n % 2 != 0)
        return 1;
    else
        return 0;
}
int main()
{

    int num = getnum();
    ptr = iseven;
    int ans = (*ptr)(num);
    if (ans)
        printf("\n it is even");
    else
        printf("\n it is not even");

    ptr = isodd;
    int ans1 = (*ptr)(num);
    if (ans1)
        printf("\n it is odd");
    else
        printf("\n it is not odd");

    return 1;
}
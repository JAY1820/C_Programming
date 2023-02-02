#include<stdio.h>

int main(){

    // int a=10;
    // int *b;
    // b=&a;
    // int *c;
    // c=&b;
    
    
    int p=10;
    int *q;
    q=&p;
    int **r;
    r=&q;

    // printf("\n a=%p",&a);
    // printf("\n %p",b);
    //  printf("\n %d",*b);
    //  printf("\n %p",&b);
    //  printf("\n %p",*c);
    //  printf("\n %p",c);
    //  printf("\n %d",*(*c));
    // printf("......");
    printf("\n %d",**r);
    printf("\n %p",r);
printf("\n %p",*r);
printf("\n %p",&q);
printf("\n x=%x",&q);
printf("\n %p",&p);

printf("\n %d",(sizeof(q)));
for (int i = 0; *("hello world"+i)!='\0'; i++)
{
    printf("%c",*("hello world"+i));
}

 int a[5]={1,2,3,4,5};
 for (int i = 0; *(a+i)!=5; i++)
{
     printf("%d",*(a+i));
 }
     
   int a = 5;
int *ptr = &a;
printf("Address of a: %p\n", (void *)&a);
printf("Address stored in ptr: %p\n", (void *)ptr);  


     
    
}
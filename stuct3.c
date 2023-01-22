#include<stdio.h>
#include<string.h>

struct bookdetail
{
          int bcode;
          char name[20];
          char author[20];
          int pages;
          float price;
          int edition;
          int bno;
 
}b[100];
 
void output(struct bookdetail v[],int n);
 
int main()
{

 
          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
                   printf("\n=:Book %d Detail:=\n",i+1);
                   
                     printf("\nEnter the Book code:\n");
                   scanf("%d",&b[i].bcode);
 
                   printf("\nEnter the Book Name:\n");
                   scanf("%s",b[i].name);
                 
                
               
                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);
 
                   printf("Enter the Pages of Book:\n");
                   scanf("%d",&b[i].pages);
 
                   printf("Enter the Price of Book:\n");
                   scanf("%f",&b[i].price);
                   
                    printf("Enter the edition of Book:\n");
                   scanf("%d",&b[i].edition);
                   
                    printf("Enter the total no of Book:\n");
                   scanf("%d",&b[i].bno);
 
 
          }
 
          output(b,num);
          
          
          return 0;
 
}
 
void output(struct bookdetail v[],int n)
 
{
 
          int i,t=1;
 
          for(i=0;i<n;i++,t++)
 
          {
 
                    printf("\n");
 
                   printf("Book No.%d\n",t);
 
 
                  printf("\t\tBook %d Name is=%d \n",t,v[i].bcode);
                   
                   printf("\t\tBook %d Name is=%s \n",t,v[i].name);
                 
                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);
 
                   printf("\t\tBook %d Pages is=%d \n",t,v[i].pages);
 
                   printf("\t\tBook %d Price is=%f \n",t,v[i].price);
                   
                   printf("\t\tBook %d Price is=%d \n",t,v[i].edition);
                   
                   printf("\t\tBook %d Price is=%d \n",t,v[i].bno);
                   
 
                   printf("\n");
 
          }
 
}
#include<stdio.h>

struct stuct1
{
   int rollno;
   char name[50];
   int marks[5]; 
}s1[5];

void collect();
void print();
int main()
{

collect();
print();
return 0;
}
void collect(){
    for(int i=0;i<2;i++){
        printf("Enter rollno:");
        scanf("%d",&s1[i].rollno);
        printf("enter a name");
        scanf("%s",s1[i].name);
        for (int j = 0; j < 5; j++)
        {
        printf("enter a subject %d marks",j+1); 
        scanf("%d",&s1[i].marks[j]);
        } 

    }
}

void print(){
    int sum=0;
        for(int i=0;i<2;i++){
      printf("roll no =%d \n",s1[i].rollno);
      printf("name =%s \n",s1[i].name);
        for (int j = 0; j < 5; j++)
        {
        printf("subject %d marks=%d \n",j+1,s1[i].marks[j]); 
            sum=sum+s1[i].marks[j];
        } 
        printf("total is :%d",sum);
        float pr = (sum/500)*100;
        printf("total is :%f",pr);
        sum=0;

    }
}


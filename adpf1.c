#include <stdio.h>
int main(){
    
   int year[100],n; 

   printf("Enter the year to check: ");

   scanf("%d",&n);

   for (int i = 0; i < n; i++)
   {
    scanf("%d",&year[i]);
   }
   
   for (int i = 0; i < n; i++)
   {
     if (year[i]>0)
     {
        if (((year[i] % 4 == 0) && (year[i] % 100!= 0)) || (year[i]%400 == 0))

      printf("\n It is a leap year %d",year[i]);

   else

        printf("\n It is a not leap year %d",year[i]);

   }
         printf("\n give  a  value again ");

     }
   return 0;

}
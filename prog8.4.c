#include<stdio.h>
#include<stdlib.h>
int main(){
   int a[10],i,j,k, count = 1, number;
  number=10;
   printf("Enter Elements of the array:");
   for(i=0;i<number;i++){
      scanf("%d",&a[i]);
      //dup[i] = -1;
   }

   for(i=0;i<number;i++){
      for(j = i+1; j < number; j++){
         if(a[i] == a[j])
            {
                count++;
            for(k = j; k <number; k++){
               a[k] = a[k+1];
            }
            j--;
            number--;
         }
      }
      printf("\n %d : %d",a[i],count);
      count=1;
   }
   printf("\nAfter deleting the duplicate element the Array is:");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
}

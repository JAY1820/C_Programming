#include<stdio.h>
#include<math.h>
int main(){
    int x[3],y[3];
    float z[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter x[%d] and y[%d] : ",i+1,i+1);
        scanf("%d %d",&x[i],&y[i]);
    }
    z[0]=(float)sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2));
    z[1]=(float)sqrt(pow(x[1]-x[2],2)+pow(y[1]-y[2],2));
    z[2]=(float)sqrt(pow(x[0]-x[2],2)+pow(y[0]-y[2],2));
   if(z[0]==z[1] && z[1]==z[2])
   {
       printf("equilateral triangle");
   } 
   else
   printf("\n not a equilateral triangle");
   return 0;
}


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double getlength(int,int,int,int);
double getarea(double,double,double);
double checkpointlocation(int,int,int,int,int,int);
int main()
{
	int a1,a2,b1,b2,c1,c2,p1,p2;
	double area,check_area,AB,BC,AC,t1,t2,t3;
	
	printf("Enter A Coordinates:\n");
	scanf("%d %d",&a1,&a2);
	printf("Enter B Coordinates:\n");
	scanf("%d %d",&b1,&b2);
	printf("Enter C Coordinates:\n");
	scanf("%d %d",&c1,&c2);
	
	AB = getlength(a1,a2,b1,b2);
	BC = getlength(b1,b2,c1,c2);
	AC = getlength(a1,a2,c1,c2);
	
	area = getarea(AB,BC,AC);
	
	printf("Area:%f\n",area);
	
	printf("Enter New Coordinates:\n");
	scanf("%d %d",&p1,&p2);
	
	t1 = checkpointlocation(a1,a2,b1,b2,p1,p2);
	t2 = checkpointlocation(b1,b2,c1,c2,p1,p2);
	t3 = checkpointlocation(a1,a2,c1,c2,p1,p2);
	//check_area = t1 + t2 + t3
	
	printf("T1:%.2f\nT2:%.2f\nT3:%.2f\n",t1,t2,t3);
		printf("CHECKAREA:%.2f\n",t1+t2+t3);
	if(area == t1 + t2 + t3)
		printf("Inside\n");
	else	
		printf("Not Inside\n");
	
	return 0;
}

double getarea(double side_1,double side_2,double side_3)
{
	double s,area;
	s = (side_1 + side_2 + side_3) / 2;
	area = abs(sqrt(s * (s-side_1) * (s-side_2) * (s-side_3)));
	return area;
}
double getlength(int point_1_x,int point_1_y,int point_2_x,int point_2_y)
{
	return sqrt( pow(point_2_x - point_1_x,2) + (pow(point_2_y - point_1_y,2)) );	
}
double checkpointlocation(int x1,int y1,int x2,int y2,int new_1,int new_2)
{
	double l1,l2,l3;
	double a;
	l1 = getlength(new_1,new_2,x1,y1);
	l2 = getlength(new_1,new_2,x2,y2);
	l3 = getlength(x1,y1,x2,y2); 
	a = getarea(l1,l2,l3);
	return a;
}
	


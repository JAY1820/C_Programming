#include <stdio.h>
double feet_inch(double);
double inch_centimeter(double);
double centimeter_meter(double);

int main()
{
	double feet,centimeter,meter,inch;
      	printf("Enter Feet:");
      	scanf("%lf",&feet);
     	
     	inch = feet_inch(feet);
     	centimeter = inch_centimeter(inch);
     	meter = centimeter_meter(centimeter);
     	
     	printf("%.2f ft = %.2f meter\n",feet,meter);
     	
	return 0;
}
double feet_inch(double feet)
{
	return (feet * 12);
}
double inch_centimeter(double inch)
{
	return (inch * 2.54);
}
double centimeter_meter(double centimeter)
{
	return (centimeter * 0.01);
}



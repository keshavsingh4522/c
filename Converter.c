C Program to Convert Kilometer to Meter Centimeter and Millimeter

C Program to Convert Kilometer to Meter Centimeter and Millimeter
This program allows the user to enter the length in Kilometers, and then convert the length into Meters, Centimeters, and Millimeters


1 Kilometer = 1000 Meters
1 Kilometer = 100000 Centimeters
and, 1 Kilometer = 1000000 Millimeters

/* C Program to Convert Kilometer to Meter Centimeter and Millimeter */
 
#include <stdio.h>
 
int main()
{
  	float Millimeter, Centimeter, Meter, Kilometer;
 
 	printf("\n Please Enter the Length in Kilometers (km)  :  ");
  	scanf("%f", &Kilometer);
  
  	Meter = Kilometer * 1000.0;
  	Centimeter = Kilometer * 100000.0; 	
  	Millimeter = Kilometer * 1000000.0; 	
 
    printf("\n %.2f Kilometers  = %.2f Meters", Kilometer, Meter);
    printf("\n %.2f Kilometers  = %.2f Centimeters", Kilometer, Centimeter);
    printf("\n %.2f Kilometers  = %.2f Millimeters", Kilometer, Millimeter);
  
   	return 0;
}

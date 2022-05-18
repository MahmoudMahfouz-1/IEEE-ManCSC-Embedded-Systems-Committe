/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	float C,F;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&C);
	F = (C*9/5)+32;
	printf("Temperature in Fahrenheit = %f F\n",F);
	
}

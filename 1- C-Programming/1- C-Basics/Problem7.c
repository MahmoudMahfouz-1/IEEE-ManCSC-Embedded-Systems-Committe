/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	float length;
	printf("Enter length in centimeter: ");
	scanf("%f",&length);
	

	printf("Length in meter = %f m\n",length/100);
	printf("Length in kilometer = %f km\n",length/1000);
	

	
}

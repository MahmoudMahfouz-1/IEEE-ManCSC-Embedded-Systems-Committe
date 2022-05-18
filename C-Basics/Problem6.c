/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	float raduis;
	printf("Enter Raduis: ");
	scanf("%f",&raduis);
	

	printf("Diamiter = %f units\n",2*raduis);
	printf("Circumference = %f units\n",2*3.14*raduis);
	printf("Area = %f units\n",3.14*raduis*raduis);

	
}

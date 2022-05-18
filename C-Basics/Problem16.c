/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	float a, b, c, d, e;
	printf("Enter marks of five subjects: ");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	
	float total, percentage, average;
	total = a + b + d + c + e;
	average = total/5;
	percentage = total / 500 * 100;
	printf("Total = %f.2\n",total);
	printf("Average = %f.2\n",average);
	printf("Percentage = %f.2\n",percentage);
}

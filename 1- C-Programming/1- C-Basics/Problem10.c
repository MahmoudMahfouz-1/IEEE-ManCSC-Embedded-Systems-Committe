/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	int days, years, weeks,temp;
	printf("Enter days: ");
	scanf("%d",&days);
	years = days/365;
	weeks = (days - (years * 365))/7;
	temp  = (days - (years*365 + weeks*7));
	printf("%d days = %d year/s and %d week/s and %d day/s\n",days, years, weeks, temp);
}

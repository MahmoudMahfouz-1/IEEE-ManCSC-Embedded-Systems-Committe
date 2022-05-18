/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	int length,width;
	printf("Enter Length: ");
	scanf("%d",&length);
	printf("Enter Width: ");
	scanf("%d",&width);

	printf("Perimeter of rectangle = %d units\n",2*(length+width));
	
}

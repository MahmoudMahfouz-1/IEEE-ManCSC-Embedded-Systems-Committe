/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"
#include "math.h"
void main()
{
	float root, num;
	printf("Enter any number: ");
	scanf("%f",&num);
	root =sqrt(num);
	printf("Square root of %.2f = %.2f\n", num, root);
}

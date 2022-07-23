/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"

void main()
{
	int num1,num2;
	printf("First Number: ");
	scanf("%d",&num1);
	printf("Second Number: ");
	scanf("%d",&num2);

	printf("Sum = %d\n",num1+num2);
	printf("Difference = %d\n",num1-num2);
	printf("Product = %d\n",num1*num2);
	printf("Quotient = %d\n",num1/num2);
	printf("Modulus  = %d\n",num1%num2);
}

/*
*	Author: Mahmoud Essam
*/
#include "stdio.h"
#include "math.h"
void main()
{
	int base, exponent, power;
	printf("Enter base: ");
	scanf("%d",&base);
	printf("Enter exponent: ");
	scanf("%d",&exponent);
	power = pow(base,exponent);
	
	printf("%d ^ %d = %d\n", base, exponent,power );
	

	
}

#include <stdio.h>


int main()
{
   int num, bit,num2;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Input nth bit to set: ");
    scanf("%d",&bit);
    num2 = 1 << bit;
    num = num | num2;

    printf("Number after setting nth bit: %d in decimal",num);

    return 0;
}

#include <stdio.h>


int main()
{
   int num, bit,num2;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Input nth bit number: ");
    scanf("%d",&bit);
    num2 = 1 << bit;
    if(num & num2)
        printf("%d bit of %d is set (1).",bit, num);
    else
        printf("%d bit of %d is unset (0).",bit, num);


    return 0;
}

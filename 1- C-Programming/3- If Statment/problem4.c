#include <stdio.h>


int main()
{
   int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num % 5 == 0 & num % 11 == 0)
        printf("Number is divisible by 5 and 11.\n",num);
    else
        printf("Number isn't divisible by 5 and 11.\n",num);

    return 0;
}

#include <stdio.h>


int main()
{
   int num, msb;
   // -1 ---> 1111 1111
   //  1 ---> 0000 0001
    printf("Enter any number: ");
    scanf("%d", &num);
    msb = 1 << 7;
   // 1 << 7 ---> 1000 0000
   //             1111 1111
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);


    return 0;
}

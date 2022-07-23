#include <stdio.h>


int main()
{
    int base, exponent, res = 1;
    printf("Input base : ");
    scanf("%d",&base);
    printf("Input exponent : ");
    scanf("%d",&exponent);
    for(int i = 0; i < exponent; i++)
    {
        res = res * base;
    }
    printf("%d\n",res);
    return 0;
}

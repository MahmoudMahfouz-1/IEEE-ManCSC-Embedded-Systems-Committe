#include <stdio.h>


int main()
{
    int n, mul = 1;
    printf("Input number : ");
    scanf("%d",&n);
    while(n != 0)
    {
        mul *= n%10;
        n = n/10;
    }
    printf("Product of digits: %d",mul);
    return 0;
}

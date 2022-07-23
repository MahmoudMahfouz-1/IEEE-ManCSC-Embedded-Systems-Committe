#include <stdio.h>


int main()
{
    int n, rev = 0;
    printf("Input number : ");
    scanf("%d",&n);
    while(n != 0)
    {
        rev = (rev*10) + (n%10);
        n = n/10;
    }
    printf("reverse number: %d",rev);
    return 0;
}

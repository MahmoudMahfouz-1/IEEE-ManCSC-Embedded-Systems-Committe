#include <stdio.h>


int main()
{
    int n, sum = 0;
    printf("Input Upper number : ");
    scanf("%d",&n);
    for(int i = 0; i < n ;i++)
    {
        sum += i;
    }
    printf("Sum of natural numbers 1-10: %d",sum);
    return 0;
}

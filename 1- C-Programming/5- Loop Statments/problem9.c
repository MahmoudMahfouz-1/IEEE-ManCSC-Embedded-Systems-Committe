#include <stdio.h>


int main()
{
    int n, sum = 0;
    printf("Input number : ");
    scanf("%d",&n);
    for(int i = 0; i < 11 ;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    printf("Sum of natural numbers 1-10: %d",sum);
    return 0;
}

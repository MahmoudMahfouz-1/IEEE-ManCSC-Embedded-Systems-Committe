#include <stdio.h>


int main()
{
    int n, counter = 0;
    printf("Input number : ");
    scanf("%d",&n);
    while(n != 0)
    {
        n = n/10;
        counter++;
    }
    printf("Number of digits: %d",counter);
    return 0;
}

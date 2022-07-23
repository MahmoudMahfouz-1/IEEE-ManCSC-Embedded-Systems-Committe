#include <stdio.h>


int main()
{
    int n;
    printf("Input N : ");
    scanf("%d",&n);
    for(int i = n; i > 0 ;i--)
    {
        printf("%d, ",n--);
    }
    return 0;
}

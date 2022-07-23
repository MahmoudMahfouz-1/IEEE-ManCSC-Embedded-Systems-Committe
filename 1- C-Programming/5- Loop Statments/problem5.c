#include <stdio.h>


int main()
{
    int n;
    printf("Input Upper number : ");
    scanf("%d",&n);
    for(int i = 0; i < n ;i++)
    {
        if(i % 2 != 0)
            printf("%d, ",i);
    }
    return 0;
}

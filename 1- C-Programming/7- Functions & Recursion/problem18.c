
#include <stdio.h>
int fact(int num)
{
    
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num* fact(n-1);
    }
}
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int res = sumOfDigits(num);
    printf("sumOfDigits is : %d",res);
    return 0;
}

#include <stdio.h>
int sumOfDigits(int num)
{
    static int x = 0;
    if(num == 0)
    {
        return x;
    }
    else
    {
        x += num%10;
        return sumOfDigits(num/10);
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
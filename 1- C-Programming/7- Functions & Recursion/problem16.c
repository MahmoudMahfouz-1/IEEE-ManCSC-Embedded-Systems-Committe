#include <stdio.h>
void isPalindrome(int num)
{
    int rev = 0,temp = num;
    while(num)
    {
        rev = (rev*10) + (num % 10);
        num = num/10;
    }
    if(temp == rev)
        printf("Number is palindrome\n");
    else
        printf("Number isn't palindrome\n");
}
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    isPalindrome(num);
    return 0;
}
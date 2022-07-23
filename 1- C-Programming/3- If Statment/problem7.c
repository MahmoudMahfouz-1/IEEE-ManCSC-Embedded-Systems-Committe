#include <stdio.h>


int main()
{
    char c;

    printf("Enter any charachter: ");
    scanf("%c", &c);
    if((c >= 65 && c<= 90) || (c >= 97 && c<= 122) )
        printf("%c is alphabet.\n",c);
    else
        printf("%c isn't alphabet.\n",c);

    return 0;
}

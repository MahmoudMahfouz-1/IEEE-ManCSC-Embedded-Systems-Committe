#include <stdio.h>


int main()
{
    char c;
    // a, e, i, o, u
    printf("Enter any charachter: ");
    scanf("%c", &c);
    if( (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') )
        printf("%c is vowel.\n",c);
    else
        printf("%c isn't vowel.\n",c);

    return 0;
}

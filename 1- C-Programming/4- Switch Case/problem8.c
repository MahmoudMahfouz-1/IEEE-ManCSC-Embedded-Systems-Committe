#include <stdio.h>


int main()
{
    float  num1 , num2 ;
    float res;
    char c;
    scanf("%f %c %f",&num1,&c,&num2);
    switch(c)
    {
    case '+':
        printf("%.2f\n",num1 + num2);     break;
    case '-':
        printf("%.2f\n",num1 - num2);     break;
    case '*':
        printf("%.2f\n",num1 * num2);     break;
    case '/':
        if(num2 == 0)
        {
            printf("ERROR DIVISION BY ZERO\n");
            break;
        }
        else
        {
            printf("%.2f\n",num1 / num2);     break;
        }
    }
     printf("%.2f %c %.2f = %.2f", num1, c, num2, res);
    return 0;
}

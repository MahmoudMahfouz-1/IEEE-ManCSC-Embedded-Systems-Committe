#include <stdio.h>


int main()
{
    int month;
  //  January, March, May, July, August, October, December -->  31 days
  //  February  --> 28/29 days
  //  April, June, September, November --> 30 days
    printf("Enter any month number: ");
    scanf("%d", &month);
    if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
        printf("it contains 31 days.\n");
    else if( month == 2 )
        printf("it contains 28 or 29 days.\n");
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11) )
        printf("it contains 30 days.\n");


    return 0;
}

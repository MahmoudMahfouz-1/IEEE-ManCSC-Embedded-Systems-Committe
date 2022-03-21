

#include "stdio.h"
/*
*   The program counts the bits from right to left 
*   if 10010 is a binary number bit number zero is 0, bit number one is 1,etc..
*/
// array to store binary number
int binaryNum[32];
// counter for binary array
int i = 0;
void decToBinary(int n)
{
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
}
int main()
{
    int num , bitnum;
    scanf("%d %d",&num ,&bitnum);
    decToBinary(num);
    // uncomment the loop to print the binary number
    // for (int j = i - 1; j >= 0; j--)
    //     printf("%d",binaryNum[j]);
    // printf("\n");
    if(binaryNum[bitnum] == 0 )
        printf("ZERO");
    else
        printf("ONE");

	return 0;
}

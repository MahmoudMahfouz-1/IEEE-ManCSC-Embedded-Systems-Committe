#include <stdio.h>
int printEvenOdd(int x,int y)
{
    if(x > y)
        return;
    else
    {
        printf("%d ",x);
        printEvenOdd(x+2,y);
    }
}
int main() {
    int x, y;
    printf("Enter lower and upper Range: ");
    scanf("%d %d",&x,&y);
    // Even Numbers 
    printEvenOdd(x,y);
    printf("\n");
    printEvenOdd(x+1,y);
    return 0;
}
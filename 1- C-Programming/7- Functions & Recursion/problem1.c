#include <stdio.h>
int cupe(int num)
{
    return num*num*num;
}
int main() {
    int num;
    scanf("%d",&num);
    printf("Cube of %d is %d\n",num, cupe(num));

    return 0;
}